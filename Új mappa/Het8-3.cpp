// Het8-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Készítsen egy koordinátát tároló struktúrát!
//Írjon függvényt, amely koordinátát olvas be billentyûzetrõl!
//Foglaljon dinamikus memóriát és jelenítse meg a tárolt koordinátákat!
//Szabadítsa fel a lefoglalt memóriaterületet!

#include <iostream>

using namespace std;

struct koord {
    int x, y, z;
};

void be(koord* k) {
    cout << "X koordinata "; cin >> k->x;
    cout << "Y koordinata "; cin >> k->y;
    cout << "Z koordinata "; cin >> k->z;
}

int main()
{
    std::cout << "Dinamikus Koordinata\n";
    koord* k = new koord;
    if (k == NULL) {
        return -1;
    }
    be(k);
    cout << endl << k->x;
    delete k;
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
