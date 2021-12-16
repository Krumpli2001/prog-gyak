#include <iostream>

using namespace std;

struct Szamol {
    int ertek;
    int db;
};

int main()
{
    int szam = 1;
    int db = 0, meret = 4;
    Szamol* szamlalok = new Szamol[meret];
    while (szam != 0) {
        cin >> szam;
        int index = 0;
        if (szam != 0) {
            while (index < db and
                szamlalok[index].ertek != szam)
                index++;
            if (index == db) {
                if (db == meret) {
                    Szamol* ujtomb = new Szamol[meret * 2];
                    for (int i = 0; i < meret; i++)
                        ujtomb[i] = szamlalok[i];
                    delete[] szamlalok;
                    szamlalok = ujtomb;
                    meret = meret * 2;
                    cout << "Tomb megnovelve "
                        << meret << " elemre.\n";
                }
                szamlalok[db].ertek = szam;
                szamlalok[db].db = 1;
                db++;
            }
            else {
                szamlalok[index].db++;
            }
        }
    }
    for (int i = 0; i < db; i++) {
        cout << szamlalok[i].ertek << ": "
            << szamlalok[i].db << " db" << endl;
    }
    delete[] szamlalok;
    return 0;
}
