#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct csucs {
	string anyag;
	csucs* bal;
	csucs* jobb;
};

struct elem {
	string anyag;
	elem* kov;
};

csucs* beszur(string alapanyag, csucs* akt) {
	if (akt == NULL) {
		akt = new csucs;
		akt->anyag = alapanyag;
		akt->bal = akt->jobb = NULL;
	}
	else if (alapanyag > akt->anyag) {
		akt->jobb = beszur(alapanyag, akt->jobb);
	}
	else if (alapanyag < akt->anyag) {
		akt->bal = beszur(alapanyag, akt->bal);
	}
	return akt;
}

void kiir(csucs* akt) {
	if (akt != NULL) {
		kiir(akt->bal);
		cout << akt->anyag << endl;
		kiir(akt->jobb);
	}
}

void felszabadit(csucs* akt) {
	if (akt != NULL) {
		felszabadit(akt->bal);
		felszabadit(akt->jobb);
		delete akt;
	}
}

bool keres(string alapanyag, csucs* akt) {
	if (akt == NULL) {
		return false;
	} else if (akt->anyag == alapanyag) {
		return true;
	}
	else if (alapanyag > akt->anyag) {
		return keres(alapanyag, akt->jobb);
	}
	else {
		return keres(alapanyag, akt->bal);
	}
}

elem* ujelem(string alapanyag, elem* elso) {
	elem* uj = new elem;
	uj->anyag = alapanyag;
	uj->kov = elso;
	return uj;
}

void bejar(elem* akt) {
	while (akt != NULL) {
		cout << akt->anyag << '\t';
		akt = akt->kov;
	}
	cout << endl;
}

void felszabLista(elem* akt) {
	elem* kov;
	while (akt) {
		kov = akt->kov;
		delete akt;
		akt = kov;
	}
}
#define FN "alapanyagok.txt"
int main() {
	csucs* gyoker = NULL;
	string anyag;
	cout << "Fozesi lehetosegeket analizalo program.\n";
	ifstream f(FN);
	if (f.is_open()) {
		while (f >> anyag, not f.eof()) {
			gyoker = beszur(anyag, gyoker);
		}
		f.close();
	}
	else {
		cout << "Milyen alapanyagok allnak rendelkezesre? Befejezes #-tel.\n";
		ofstream of(FN);
		while (cin >> anyag, anyag != "#") {
			gyoker = beszur(anyag, gyoker);
			if (of.is_open()) {
				of << anyag << endl;
			}
		}
		if (of.is_open()) {
			of.close();
		}
	}
	//kiir(gyoker);

	bool elkeszitheto;
	string etel;
	elem* elso;
	while (cout << "Etel neve: ", cin >> etel, etel != "#") {
		cout << "Milyen alapanyagokra van szukseg? Befejezes #-tel.\n";
		elkeszitheto = true;
		elso = NULL;
		while (cin >> anyag, anyag != "#") {
			if (not keres(anyag, gyoker)) {
				elkeszitheto = false;
				elso = ujelem(anyag, elso);
			}
		}
		if (elkeszitheto) {
			cout << "A(z) " << etel << " elkeszitheto.\n";
		} else {
			cout << "A(z) " << etel << " nem keszitheto el.\n"
				<< "A hianyzo hozzavalok:\n";
			bejar(elso);
			felszabLista(elso);
		}
	}
	cout << "Kilepes.\n";
	felszabadit(gyoker);
	return 0;
}