// Het6-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Készítsen programot, amely személyek születési évét, hónapját, napját képes tárolni, valamint a személy lakhelyének
//fõvárostól való távolságát km-ben (float)!
//Olvassa be 5 személy adatait a standard bemenetrõl!
//Rendezze a tömböt a személyek kora szerinti növekvõ sorrendbe, majd jelenítse meg az elemeit!
//Rendezze a tömböt a fõvárostól való távolságok szerinti csökkenõ sorrendbe, majd jelenítse meg az elemeit!

#include <iostream>

using namespace std;

struct szemely {
    int szulev;
    int szulho;
    int szulnap;
    float tav;
};

int szulszam(szemely sz) {
    return sz.szulev * 1000 + sz.szulho * 10 + sz.szulnap;
}

int main()
{
    std::cout << "Az emberek a tombe\n";
    szemely tomb[5];
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". szemly szuletesi eve: "; cin >> tomb[i].szulev;
        cout << i + 1 << ". szemly szuletesi honapja: "; cin >> tomb[i].szulho;
        cout << i + 1 << ". szemly szuletesi napja: "; cin >> tomb[i].szulnap;
        cout << i + 1 << ". szemly lakhelyenek a tavolsaga a fovarostol: "; cin >> tomb[i].tav;
    }
    /*for (int i = 0; i < 5; i++) {
        cout << tomb[i].szulev<<"\t";
    }*/
    for (int i = 0; i < 4; i++) {
        int k = i;
        for (int j = i + 1; j < 5; j++) {
            if (szulszam(tomb[k]) < szulszam(tomb[j]) ){
                k = j;
            }
            szemely cs;
                cs=tomb[k];
                tomb[k]=tomb[j];
                tomb[j]=cs;
        }
    }
    for (int i = 0; i < 4; i++) {
        int k = i;
        for (int j = i + 1; j < 5; j++) {
            if (tomb[i].tav > tomb[j].tav) {
                k = j;
            }
            szemely cs;
            cs = tomb[k];
            tomb[k] = tomb[j];
            tomb[j] = cs;
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
