// Het6-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Készítsen programot, amely bekéri a standard bemenetrõl hallgatók vezetéknevét, keresztnevét, neptun kódját,
//egy tantárgy nevét és a tárgyból írt 4 db ZH eredményeit!
//Az adatok bekérését végezze el egy erre a célra tervezett függvény, amely több értéket képes vissza adni!
//Az átlag számítását szintén egy függvény segítségével végezze el,
//ahol paraméterként az elõzõ pontban meghatározott függvény visszatérési értékei szolgáljanak!

#include <iostream>
#include <string>

using namespace std;

struct hallgato {
    string vezetek;
    string kereszt;
    string neptun;
    string tan;
    int zhk[4];
};

hallgato be() {
    hallgato uj;
    cout << "Vezeteknev: "; cin >> uj.vezetek;
    cout << "Keresztnev: "; cin >> uj.kereszt;
    cout << "Neptunkod: "; cin >> uj.neptun;
    cout << "Tantargy: "; cin >> uj.tan;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". ZH eredmenye: ";
        cin >> uj.zhk[i];
    }
    return uj;
}

double atlag(hallgato uj) {
    double ossz, atlag;
    ossz = 0;
    for (int i = 0; i < 4; i++) {
        ossz = ossz + uj.zhk[i];
    }
    atlag = ossz / 4;
    return atlag;
}

int main()
{
    std::cout << "Hello World!\nHallgatok atlaga:\n";
    hallgato uj;
    uj = be();
    double atl = atlag(uj);
    cout << atl << endl;
    cout << uj.neptun;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
