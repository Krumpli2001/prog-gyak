// Het7-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvasson be egy hatelem� t�mb�t, amely eg�sz sz�mokat t�rol �s t�ltse fel �rt�kekkel!
//Hozzon l�tre egy 10 elem� t�mb�t, amely mutat�kat t�rol!
//Olvasson be t�z sz�mot a k�perny�r�l!Ha a sz�m szerepel a hatelem� t�mbben, t�rolja el annak a c�m�t,
//ellenkez� esetben t�roljon el egy nulla�rt�k� c�met!
//Jelen�tse meg a 10 elem� t�mb �ltal mutatott �rt�keket �s hozz�juk tartoz� mem�riac�meket!

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int tomb[6];
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". szam: ";
        std::cin >> tomb[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << tomb[i] << '\t';
    }
    cout << endl;
    int* mutatok[10];

    for (int i = 0; i < 10; i++) {
        int a;
        std::cin >> a;
        bool pipa=true;
        int j = 0;
        while ( j < 6 and pipa) {
            if (a == tomb[j]) {
                mutatok[i] = &tomb[j];
                pipa = false;
            }
            else
                mutatok[i] = NULL;
            j++;
        }
    }
    for (int i = 0; i < 10; i++) {
        std::cout << mutatok[i] << '\t';
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
