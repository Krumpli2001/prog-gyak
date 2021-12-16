// 0as sorok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Vegyünk egy egész számokból álló mátrixot, és töröljük ki a csak nullát tartalmazó sorokat!

#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL));
    std::cout << "Hello World!\nMatrixbol kivesszuk a nullakat\nMekkora legyen a matrix?\n";
    int n;
    std::cin >> n;
    //Matrix merete

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    //Matrix letrehozasa

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 2;
        }
    }
    //Matrix megtoltese random szamokkal

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout << "\n";
    }
    //Matrix kiiratasa

    std::cout << std::endl;

    int deleted = n;

   /* matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 0;
    matrix[2][3] = 0;*/
    //test

    /*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << std::endl;*/
    //szintugy test

    for (int i = 0; i < deleted; i++) {
        int nullak = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                nullak++;
            }
        }
        if (nullak == n) {
            for (int k = i; k < n; k++) {
                matrix[k] = matrix[k + 1];
            }
            //delete[] matrix[deleted];
            deleted--;
        }
    }
    //valahogy torles???

    for (int i = 0; i < deleted; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    //torolt matrix kiiratasa

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
