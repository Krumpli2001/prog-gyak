#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct megallo {
	string nev;
	string erkezes;
	string indulas;
	megallo* kov;
};

struct jarat {
	string nev;
	megallo* elso;
	megallo* utolso;
};

#define JARATDB 4
struct menetrend {
	jarat* jaratok;
	int maxdb;
	int db;
};

menetrend betolt(string fajl) {
	menetrend m;
	m.jaratok = new jarat[JARATDB];
	m.maxdb = JARATDB;
	ifstream f(fajl);
	if (f.is_open()) {
		string adat;
		for (m.db = 0; f >> adat, adat != "vege"; m.db++) {
			if (m.db == m.maxdb) {
				m.maxdb += JARATDB;
				jarat* ujJarat = new jarat[m.maxdb];
				for (int i = 0; i < m.db; i++) {
					ujJarat[i] = m.jaratok[i];
				}
				delete[] m.jaratok;
				m.jaratok = ujJarat;
			}
			m.jaratok[m.db].nev = adat;
			m.jaratok[m.db].elso = NULL;
			m.jaratok[m.db].utolso = NULL;
			while (f >> adat, adat != "---") {
				megallo* uj = new megallo;
				if (m.jaratok[m.db].elso == NULL) {
					m.jaratok[m.db].elso = uj;
				}
				if (m.jaratok[m.db].utolso != NULL) {
					m.jaratok[m.db].utolso->kov = uj;
				}
				uj->nev = adat;
				f >> uj->erkezes;
				f >> uj->indulas;
				uj->kov = NULL;
				m.jaratok[m.db].utolso = uj;
			}
		}
		f.close();
	}
	return m;
}

void kiir(menetrend m) {
	for (int i = 0; i < m.db; i++) {
		cout << "Jarat neve: " << m.jaratok[i].nev << endl;
		for (megallo* aktm = m.jaratok[i].elso; aktm != NULL; aktm = aktm->kov) {
			cout << aktm->nev << '\t' << aktm->erkezes << '\t' << aktm->indulas << endl;
		}
		cout << endl;
	}
}

void felszabadit(menetrend m) {
	for (int i = 0; i < m.db; i++) {
		megallo* kov;
		for (megallo* aktm = m.jaratok[i].elso; aktm != NULL; aktm = kov) {
			kov = aktm->kov;
			delete aktm;
		}
	}
	delete[] m.jaratok;
}

int main(int argc, char* argv[]) {
	menetrend m = betolt("vonat.txt");
	// kiir(m);
	if (argc == 2) {
		cout << argv[1] << " megallot erinto jaratok:\n";
		for (int i = 0; i < m.db; i++) {
			megallo* aktm;
			for (aktm = m.jaratok[i].elso;
				aktm != NULL and aktm->nev != argv[1];
				aktm = aktm->kov);
			if (aktm != NULL) {
				jarat& j = m.jaratok[i];
				cout << j.nev << " indul " << j.elso->nev <<
					" allomasrol " << j.elso->indulas << "-kor, es erkezik " <<
					j.utolso->nev << " allomasra " << j.utolso->erkezes << "-kor.\n";
			}
		}
	}
	else {
		string aktIdo;
		string indul, erkezik;
		cout << "Adja meg az aktualis idot! ";
		cin >> aktIdo;
		do {
			cout << "Honnan szeretne indulni? ";
			cin >> indul;
			if (indul != "vege") {
				cout << "Hova utazna? ";
				cin >> erkezik;
				string alkalmasJaratok;
				for (int i = 0; i < m.db; i++) {
					string mikorIndul = "99:99", mikorErkezik = "99:99";
					for (megallo* akt = m.jaratok[i].elso; akt != NULL; akt = akt->kov) {
						if (akt->nev == indul) {
							mikorIndul = akt->indulas;
						}
						if (akt->nev == erkezik) {
							mikorErkezik = akt->erkezes;
						}
					}
					if (mikorIndul < mikorErkezik and mikorIndul != "99:99" and
						mikorErkezik != "99:99" and mikorIndul >= aktIdo) {
						string eredm = m.jaratok[i].nev + " elindul: " +
							mikorIndul + " es megerkezik: " + mikorErkezik + "\n";
						cout << eredm;
						alkalmasJaratok += eredm;
					}
				}
				if (alkalmasJaratok != "") {
					char c;
					cout << "Kivanja menteni az eredmenyeket? (i/n)";
					cin >> c;
					if (c == 'i') {
						ofstream f("menetrend.txt");
						if (f.is_open()) {
							f << indul << " es " << erkezik << " kozott kozlekedo jaratok:\n";
							f << alkalmasJaratok;
							f.close();
						}
						else {
							cout << "Sajnos nem sikerult a mentes :(\n";
						}
					}
				}
			}
		} while (indul != "vege");
	}

	felszabadit(m);
	return 0;
}