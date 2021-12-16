#include "szemely.h"

#define NAPOK 5

std::string Hetkoznap[5] = {"Hetfo", "Kedd", "Szerda", "Csutortok", "Pentek"};

void szemelybe(szemely* sz) {
	std::cout << "Nev: ";
	std::getline(std::cin >> std::ws, sz->nev);
	sz->orarend = new nap[NAPOK];
	for (int i = 0; i < NAPOK; i++) {
		std::cout << Hetkoznap[i]<<":\n";
		napbe(sz->orarend + i);
	}
}

void szemelyki(szemely* sz) {
	std::cout << "\n";
	std::cout << sz->nev << "\n";
	std::cout << "\n";
	for (int i = 0; i < NAPOK; i++) {
		std::cout << Hetkoznap[i];
		napki(sz->orarend + i);
	}
}

void delszemely(szemely* sz) {
	delete[] sz->orarend;
}