// het10-cegek.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//F�ggv�nyek deklar�ci�ja vs. defin�ci�ja
//Include m�k�d�s�nek bemutat�sa
//Header guard(mi�rt ? hogyan ? ism�tl�s a kapcsol�d� makr�kr�l)
//Al�bbi k�t feladatb�l valamelyiket k�z�sen megcsin�lni, a m�sikat �n�ll� munk�ban!
//Minden strukt�ra �s a hozz�tartoz�(nem tag - ) f�ggv�nyek deklar�ci�ja k�l�n headerben, a f�ggv�nyek implement�ci�ja cpp - ben.
//Mindenhol csak a sz�ks�ges header f�jlok include - ol�sa.
//Megmutatni, hogy hogy kell sz�vegf�jlb�l bem�solni a bemenetet parancssorba, hogy ne kelljen sokat g�pelni.

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
