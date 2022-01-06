// het13-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#define NEV "het13-4.cpp"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    ifstream f(NEV, ios_base::binary);
    if (f.is_open()) {
        f.seekg(0, ios_base::end);
        streampos vege = f.tellg();
        int vege2 = vege;
        char* tomb = new char[vege2];
        f.seekg(0, std::ios_base::beg);
        f.read(tomb, vege);
        for (char* m = tomb; m < tomb + vege; m++) {
            cout << *m;
        }
        cout << endl;
        delete[] tomb;
        f.close();
    }
    else {
        std::cerr << "Valami nem jo";
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
