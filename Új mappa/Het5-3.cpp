// Het5-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Írjon függvényt, amely két számot vár paraméterül és eredményül visszaadja a két szám maximumát!
//Olvasson be egy számot, amelyet eltárol jelenlegi maximális értékként!
//Olvasson be számokat addig, míg nem adunk meg háromszor is nagyobb számot az elõzõeknél!
// A nagyobb számot mindig tárolja el jelenlegi maximumként!
//A feladat megoldásához használja fel az elõzõleg megírt függvényt!

#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else if (b > a) {
        return b;
    }
    else
        return a;
}

int main()
{
    std::cout << "Maximumok!\n";
    int aktmax, a;
    cout << "Mi legyen az alap?\n";
    cin >> aktmax;
    do {
        cout << "Next! "; cin >> a;
        if (a > 3 * aktmax) {
            cout << "3-szor nagyobb, kilepes!";
            return 0;
        }
        aktmax = max(aktmax, a);
        cout << aktmax<<endl;
    } while (true);
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
