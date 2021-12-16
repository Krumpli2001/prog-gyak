// Het8-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvasson be egy egész számot billentyûzetrõl!
//Foglaljon helyet annyi egész számnak, amennyi az elõzõleg beolvasott szám értéke!
//Olvasson be és tároljon el annyi egész számot, amennyi az elõzõleg beolvasott szám értéke!
//Írassa ki a beolvasott számokat!
//Szabadítsa fel a lefoglalt memóriaterületet!

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int a, *tomb;
    cout << "Mekkora legyen a tomb? ";
    cin >> a;
    tomb = new int[a];
    if (tomb == NULL) {
        return -1;
    }
    for (int i = 0; i < a; i++) {
        cout << i + 1 << ". elem: ";
        cin >> tomb[i];
    }
    cout << "Tomb kiirasa\n";
    for (int i = 0; i < a; i++) {
        cout << i + 1 << ". elem: "<< tomb[i]<<endl;
        cout << tomb + i<<endl;
    }
    cout << tomb;
    delete[] tomb;
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
