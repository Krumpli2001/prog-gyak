// Het8-5v3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
//Tetszõleges különbözõ érték elõfordulhat.

#include <iostream>

struct number {
    int n, q;
};

int main()
{
    std::cout << "Szamok elofordulasa\n";
    int a = 1;
    int akt;
    int db = 0;
    number* numbers = new number[a];

    do {
        if (a == db) {
            std::cout << "A tomb ki lett bovitve " << a*2 << " elemre.\n";
        }
        std::cin >> akt;
        int idx = 0;
        if (a == db and akt!=0) {
            number* newnumbers = new number[a];
            for (int i = 0; i <= a ; i++) {
                newnumbers[i] = numbers[i];
            }
            delete[] numbers;
            a = a * 2;
            numbers = new number[a];
            for (int i = 0; i <= a/2; i++) {
                numbers[i] = newnumbers[i];
            }
            delete[] newnumbers;
        }
        while (akt != 0 && idx < db && akt != numbers[idx].n) {
            idx++;
        }
        if (idx == db) {
            numbers[idx].n = akt;
            numbers[idx].q = 1;
            db++;
        }
        else if (akt != 0) {
            numbers[idx].q++;
        }
    } while (akt != 0);

    for (int i = 0; i < db; i++) {
        std::cout << "A " << numbers[i].n << " " << numbers[i].q << " alkalommal fordult elo\n";
    }
    delete[] numbers;
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
