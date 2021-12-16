#include <iostream>
#include <string>

#define ZERO "-----"
#define ONE ".----"
#define TWO "..---"
#define THREE "...--"
#define FOUR "....-"
#define FIVE "....."
#define SIX "-...."
#define SEVEN "--..."
#define EIGHT "---.."
#define NINE "----."

void felbont(std::string, int);

int main() {
    std::cout << "Egy szam morze kodja 0-32000 tartomanyban\n-1-re kilep\n";
    int number = 0;
    int len;
    std::string str;
    while (number != -1) {
        std::cin >> number;
        if (number >= 0 and number <= 32000) {
            str = std::to_string(number);
            len = str.length();
            felbont(str, len);
            std::cout << "\n";
        }
        else
            std::cout << "Nincs bent a tartomanyban\n";
    }
}

void felbont(std::string n, int len) {
    for (int i = 0; i < len; i++) {
        if (n[i] == '1') {
            std::cout << ONE;
        }
        else if (n[i] == '2') {
            std::cout << TWO;
        }
        else if (n[i] == '3') {
            std::cout << THREE;
        }
        else if (n[i] == '4') {
            std::cout << FOUR;
        }
        else if (n[i] == '5') {
            std::cout << FIVE;
        }
        else if (n[i] == '6') {
            std::cout << SIX;
        }
        else if (n[i] == '7') {
            std::cout << SEVEN;
        }
        else if (n[i] == '8') {
            std::cout << TWO;
        }
        else if (n[i] == '9') {
            std::cout << NINE;
        }
        else if (n[i] == '0') {
            std::cout << ZERO;
        }
    }
}