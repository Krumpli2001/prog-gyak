// Het7-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//K�sz�tsen egy koordin�ta strukt�r�t!
//K�sz�tsen egy h�romsz�g strukt�r�t, amely h�rom koordin�t�t t�rol!
//�rjon f�ggv�nyt, amely egy h�romsz�g strukt�ra c�m�t kapja meg �s felt�lti azt billenty�zetr�l olvasott �rt�kekkel!
//�rjon f�ggv�nyt, amely egy h�romsz�g strukt�ra c�m�t kapja �s megjelen�ti azt a k�perny�n!
//Olvasson be egy k�t elem� t�mbbe h�romsz�geket az el�bb meg�rt f�ggv�ny seg�ts�g�vel!
//�rassa ki a t�mb elemeit!

#include <iostream>

using namespace std;

struct koord {
    int x, y, z;
};

struct haromszog {
    koord A;
    koord B;
    koord C;
};

void be(haromszog* h) {
    cout << "A koordinatai: \n";
    cout<<"X: "; cin >> h->A.x;
    cout << "Y: "; cin >> h->A.y;
    cout << "Z: "; cin >> h->A.z;
    cout << "B koordinatai: \n";
    cout << "X: "; cin >> h->B.x;
    cout << "Y: "; cin >> h->B.y;
    cout << "Z: "; cin >> h->B.z;
    cout << "C koordinatai: \n";
    cout << "X: "; cin >> h->C.x;
    cout << "Y: "; cin >> h->C.y;
    cout << "Z: "; cin >> h->C.z;
}

void ki(haromszog* h) {
    cout << "A koordinatai: \n";
    cout<<"X: "<<h->A.x<<"\t";
    cout << "Y: " << h->A.y << "\t";
    cout << "Z: " << h->A.z << endl;
    cout << "B koordinatai: \n";
    cout<<"X: " << h->B.x << "\t";
    cout << "Y: " << h->B.y << "\t";
    cout << "Z: " << h->B.z << endl;
    cout << "C koordinatai: \n";
    cout<<"X: " << h->C.x << "\t";
    cout << "Y: " << h->C.y << "\t";
    cout << "Z: " << h->C.z << endl;
}

int main()
{
    std::cout << "Haromszog koordinatai: \n";

    haromszog tomb[2];
    haromszog* hp = tomb;
    for (int i = 0; i < 2; i++, hp++) {
        cout << i + 1 << ". haromszog"<<endl;
        be(hp);
    }
    hp = tomb;
    for (int i = 0; i < 2; i++,hp++) {
        cout << i + 1 << ". haromszog" << endl;
        ki(hp);
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
