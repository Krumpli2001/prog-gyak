// Prog2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Kérjünk egy számot, rajzoljunk ennyi karakter széles négyzetet a képernyõre
//Rajzoljuk be a két átlót is

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Kocka rajzolas\nOldalak hossza: ";
    int n;
    cin >> n;
    int oszlop, sor;
    oszlop = 0;
    while (oszlop < n) {
        sor = 0;
        while (sor < n) {
            cout << "X";
            sor = sor + 1;
        }
        cout << endl;
        oszlop = oszlop + 1;
    }

    cout << "Ngyzet rajzolas\nOldalak hossza: ";
    cin >> n;
    oszlop = 0;
    while (oszlop < n) {
        sor = 0;
        while (sor < n) {
            if (sor == 0 or sor == n - 1 or oszlop == 0 or oszlop == n - 1) {
                cout << "X";
            }
            else
                cout << " ";
            sor = sor + 1;
        }
        cout << endl;
        oszlop = oszlop + 1;
    }

    cout << "Ngyzet rajzolas\nOldalak hossza: ";
    cin >> n;
    oszlop = 0;
    while (oszlop < n) {
        sor = 0;
        while (sor < n) {
            if (sor == 0 or sor == n - 1 or oszlop == 0 or oszlop == n - 1) {
                cout << "X";
            }
            else if (sor == oszlop) {
                cout << "X";
            }
            else if (sor + oszlop == n-1) {
                cout << "X";
            }
            else
                cout << " ";
            sor = sor + 1;
        }
        cout << endl;
        oszlop = oszlop + 1;
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
