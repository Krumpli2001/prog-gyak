// Prog 1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int i;
    do {
        std::cout << "Kerek egy szamot: ";
        int a=0;
        cin >> a;
        cout << "A szam ketszerese: " << 2 * a<<endl;
        i = a;
    }while (i != 0);
    cout << "0 ketszerese 0, a program kilep"<<endl;

}
