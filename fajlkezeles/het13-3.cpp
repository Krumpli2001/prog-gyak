// het13-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#define NEV "probafajl2.txt"

int main()
{
    std::cout << "Hello World!\n";
    std::ifstream f(NEV);
    if (f.is_open()) {
        f.seekg(0, std::ios_base::end);
        std::streampos vege = f.tellg();
        std::cout << "A meret: " << vege << " bajt";
        f.close();
    }
    else {
        std::cerr << "Megnyitasi hiba";
    }

    std::cout<<std::endl;

    std::cout << "v2\n";
    std::ifstream f2(NEV, std::ios::binary);
    if (f2.is_open()) {
        f2.seekg(0, std::ios_base::end);
        std::streampos vege = f2.tellg();
        std::cout << "A meret: " << vege << " bajt";
        f2.close();
    }
    else {
        std::cerr << "Megnyitasi hiba";
    }
}

