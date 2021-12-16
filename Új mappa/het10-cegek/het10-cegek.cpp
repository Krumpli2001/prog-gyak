// het10-cegek.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//Függvények deklarációja vs. definíciója
//Include mûködésének bemutatása
//Header guard(miért ? hogyan ? ismétlés a kapcsolódó makrókról)
//Alábbi két feladatból valamelyiket közösen megcsinálni, a másikat önálló munkában!
//Minden struktúra és a hozzátartozó(nem tag - ) függvények deklarációja külön headerben, a függvények implementációja cpp - ben.
//Mindenhol csak a szükséges header fájlok include - olása.
//Megmutatni, hogy hogy kell szövegfájlból bemásolni a bemenetet parancssorba, hogy ne kelljen sokat gépelni.

#include <iostream>
#include "ceg.cpp"



int main()
{
    std::cout << "Hello World!\n";

    /*datum d1;
    datum d2;
    datumbe(&d1);
    datumbe(&d2);
    std::cout << dhasonlit(&d1, &d2)<<"\n";
    datumki(&d1);*/

    ceg t;
    cegbe(&t);
    cegki(&t);
    cegdel(&t);
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
