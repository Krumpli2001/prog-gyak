// Prog2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Kérjünk be számokat, míg egymás után kétszer ugyanazt a számot nem kapjuk
//A végén írjuk ki, hogy hány számot olvastunk be
//És hány páros számot olvastunk be ?

#include <iostream>
using namespace std;

int main()
{
    int a, b, i, p;
    cout << "Az elso szam: "; cin >> a;
    b = a - 1;
    if (a % 2 == 0) { p = 1; }
    else { p = 0; }
    i = 1;
    while (a != b) {
        cout << "Az kovetkezo szam: "; cin >> b;
        i = i + 1;
        if (b % 2 == 0) { p = p + 1; }
        int cs;
        cs = a;
        a = b;
        b = cs;

    }
    cout << "Az osszes szam eddig: " << i << "\nParos szamok: " << p;
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
