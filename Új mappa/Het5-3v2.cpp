// Het5-3v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    std::cout << "Nagyobbak\n";
    int aszam, a, db=0;
    cout << "A szam: ";
    cin >> aszam;
    do {
        cout << "Next! ";
        cin >> a;
        if (max(aszam, a) > aszam) {
            aszam = a;
            db++;
            cout << "Ez volt a " << db  << ". nagyobb szam\na jelenlegi maximum: " << aszam << endl;
        }
    } while (db < 3);

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
