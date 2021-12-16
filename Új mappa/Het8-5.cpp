// Het8-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvasson be egész számokat, amíg 0-t nem kap, majd mondja meg, melyik érték hányszor szerepelt a bemeneten!
//Elsõ szint : Az értékek egy ismert, kis intervallumba eshetnek.

#include <iostream>

#define MAX 101

int main()
{
    std::cout << "Ertekek egytol szazig\nNullara kilep\n";
    int aktn;
    int numbers[MAX] = { 0 };

    /*for (int i = 0; i < MAX; i++) {
        numbers[i] = 0;
    }*/
    do {
        std::cin >> aktn;
        if (aktn > 0 and aktn < 101) {
            numbers[aktn] = numbers[aktn] + 1;
        }
    } while (aktn != 0);
    for (int i = 1; i < MAX ; i++) {
        if (numbers[i] > 0) {
            std::cout << "A " << i << " " << numbers[i] << " alkalommal szerepel\n";
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
