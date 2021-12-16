// charlanc csere.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

char* zagyval(char*);

int main()
{
    std::cout << "Hello World!\n";
    std::string ws;
    std::cin >> ws;
    //std::cout << word;
    char* pre = &ws[0];
    //std::cout << pre<<" "<<&pre<<" "<<&ws[0];
    char* kesz = zagyval(pre);
    std::cout<<kesz;
}

char* zagyval(char* word) {
    //char* kesz = word;
    std::string sz = word;
    int h = sz.length();
    char cs;
    if (h % 2 == 0) {
        h = h;
    }
    else
        h = h - 1;
    for (int i = 0; i < h; i = i + 2) {
        cs = sz[i];
        sz[i] = sz[i + 1];
        sz[i + 1] = cs;
    }
    
  //  word =+ *sz[0];
    return _strdup(sz.c_str());
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
