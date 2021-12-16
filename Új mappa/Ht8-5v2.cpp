// Ht8-5v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
//Második szint: Nem ismert az értékek intervalluma, de csak 100-féle érték fordulhat elõ.

#include <iostream>

#define MAX 100

struct number {
    int aktn;
    int q;
};

int main()
{
    std::cout << "100 fele szamot adhatsz\n0-ra kilepunk\n";
    number numbers[MAX];
    int akt = 1, db = 0;
    while (akt != 0) {
        int i = 0;
        std::cin >> akt;
        if (akt != 0) {
            while (i < db and numbers[i].aktn != akt) {
                i++;
            }
            if (i == db) {
                    numbers[db].aktn = akt;
                    numbers[db].q=1;
                    db++;
            }
            else
                numbers[i].q++;
        }
    }
    for (int i = 0; i < db; i++) {
        std::cout << "A " << numbers[i].aktn << " " << numbers[i].q << " alkalommal szerepel\n";
    }
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
