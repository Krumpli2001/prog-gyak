// het13-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//�rjunk egy programot ami l�trehoz egy elsofajl nev� txt f�jlt, �s bele�rja a k�vetkez� sz�veget:
//Ezt a fajlt c++ nyelven irt programmal hoztam l�tre!
//Juppi!
//Hello Vil�g!

#include <iostream>
#include <fstream>

#define NEV "masodikfajl.txt"

int main()
{
    std::cout << "Hello World!\nAlso, kecske";
    std::ofstream f(NEV);
    if (f.is_open()) {
        f << "Ezt a fajlt c++ nyelven irt programmal hoztam l�tre!\n";
        f << "Juppi!\n";
        f << "Hello Vilag\n";
        f.close();
    }
}


