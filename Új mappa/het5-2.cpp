// het5-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Írjon függvényt, amely két számot vár paraméterül és eredményül `1`-et ad vissza,
//ha az elsõ szám nagyobb a másodiknál, `-1`-et, ha a második nagyobb az elsõnél, `0`-át, ha egyenlõk!

#include <iostream>

using namespace std;

int nagyobb(int a, int b) {
    if (a > b) {
        return 1;
    }
    else if (b > a) {
        return -1;
    }
    else
        return 0;
}

int main()
{
    std::cout << "Melyikek a nagyobb?\n";
    /*int a, b;
    cout << "Elso szam: "; cin >> a;
    cout << "Masodik szam: "; cin >> b;
    cout << nagyobb(a, b);*/

    int tomb[7];
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << ". elem: "; cin >> tomb[i];
    }
    for (int i = 0; i < 6; i++) {
        if (nagyobb(tomb[i],tomb[i + 1]) == 1) {
            cout << tomb[i] << "es" << tomb[i + 1] << endl;
        }
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
