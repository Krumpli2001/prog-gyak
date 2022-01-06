// het13-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Írjunk egy programot ami létrehoz egy elsofajl nevû txt fájlt, és beleírja a következõ szöveget:
//Ezt a fajlt c++ nyelven irt programmal hoztam létre!
//Juppi!
//Hello Világ!

#include <iostream>
#include <fstream>

#define NEV "masodikfajl.txt"

int main()
{
    std::cout << "Hello World!\nAlso, kecske";
    std::ofstream f(NEV);
    if (f.is_open()) {
        f << "Ezt a fajlt c++ nyelven irt programmal hoztam létre!\n";
        f << "Juppi!\n";
        f << "Hello Vilag\n";
        f.close();
    }
}


