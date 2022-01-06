// het13-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

std::streampos fajlmeret(std::ifstream& f) {
    std::streampos akt, vege;
    akt = f.tellg();
    f.seekg(0, std::ios_base::end);
    vege = f.tellg();
    f.seekg(akt, std::ios_base::beg);
    return vege;
}

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";
    if (argc != 2) {
        std::cout << "Hasznalat:\n\t" << argv[0] << " fajlazonosito\n";
        char k;
        std::cin >> k;
        return 1;
    }
    std::ifstream f(argv[1], std::ios::binary);
    if (not f.is_open()) {
        std::cerr << argv[0] << " Nem nyithato meg!\n";
        char k;
        std::cin >> k;
        return 2;
    }
    std::streampos meret = fajlmeret(f);
    int i = 0;
    char c;
    while (f.get(c)) {
        i++;
        if (c < ' ' and c != '\n' and c != '\t' and c != '\r' and not(c == 26 and i == meret)) {
            std::cout << "A(z) " << argv[0] << " valszeg binaris";
            f.close();
            char k;
            std::cin >> k;
            return 0;
        }
    }

    std::cout << "A(z) " << argv[0] << " valszeg txt";
    f.close();
    char k;
    std::cin >> k;
    return 0;
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
