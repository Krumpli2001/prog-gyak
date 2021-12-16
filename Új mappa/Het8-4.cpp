// Het8-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvasson be egy legfeljebb 100 karakter hosszú szöveget!
//Hozzon létre egy a szöveg hosszának megfelelõ méretû tömböt!
//Másolja át a szöveget a számára létrehozott tömbbe!
//Írassa ki a szöveget!
//Szabadítsa fel a lefoglalt memóriaterületet!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szoveg;
    std::cout << "Hello World!\n";
    do {
        getline(cin, szoveg);
    } while (szoveg.length() > 100);
    int hossz = szoveg.length();
    string* tomb = new string[hossz];
    for (int i = 0; i < hossz; i++) {
        tomb[i] = szoveg[i];
    }
    for (int i = 0; i < hossz; i++) {
        cout << tomb[i];
    }
    delete[] tomb;
    //cout << szoveg;

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
