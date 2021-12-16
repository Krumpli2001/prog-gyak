// Het7-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Készítsen egy struktúrát, amely koordinátákat tárol (x, y, z)!
//Hozzon létre egy tízelemû tömböt, amely koordinátákat tárol!
//Egy mutató segítségével töltse fel a tömböt értékekkel!
//A mutatón keresztül jelenítse meg a tömb elemeit!

#include <iostream>

using namespace std;

struct koord {
    int x, y, z;
};

int main()
{
    std::cout << "Hello World!\nTomb feltoltese"<<endl;

    koord tomb[10];
    koord* km = tomb;

    for (int i = 0; i < 10; i++, km++) {
        cout << i + 1 << ". koordinata: ";
        //cin >> tomb[i].x >> tomb[i].y >> tomb[i].z;
        //cin >> (km + i)->x, (km + i)->y, (km + i)->z;
        cout << "X: ";
        cin >> km->x;
        cout << "Y: ";
        cin >> km->y;
        cout << "Z: ";
        cin>>km->z;
    }
    km = tomb;
    for (int i = 0; i < 10; i++,km++) {
        cout << i + 1 << ". koordinatak";
        cout << km->x << " " << km->y << " " << km->z<<endl;
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
