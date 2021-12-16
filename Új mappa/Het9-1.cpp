// Het9-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\nPaszkal haromszog!\n";
    int n;
    std::cin >> n;
    int** pascal = new int*[n];
    for (int i = 0; i < n; i++) {
        pascal[i] = new int[i + 1];
    }

    pascal[0][0] = 1;

    for (int i = 1; i < n; i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    int m = n;

    for (int i = 0; i < n; i++) {
        
            for (int l = m - 1; l > 0; l--) {
                std::cout << " ";
            }
        
        for (int j = 0; j <= i; j++) {
            std::cout << pascal[i][j]<<" ";
        }
        std::cout << "\n";
        m = m - 1;
    }

    delete[] pascal;
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
