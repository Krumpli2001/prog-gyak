#include "ido.h"

void idobe(ido* i) {
	do {
		std::cout << "Ora: "; std::cin >> i->ora;
	} while (0 > i->ora or i->ora > 24);
	do {
		std::cout << "Perc: "; std::cin >> i->perc;
	} while (0 > i->perc or i->perc > 60);
}

int idohas(const ido* i1, const ido* i2) {
	if (i1->ora > i2->ora) {
		return 1;
	}
	if (i1->ora < i2->ora) {
		return -1;
	}
	if (i1->ora == i2->ora) {
		if (i1->perc > i2->perc) {
			return 1;
		}
		if (i1->perc < i2->perc) {
			return -1;
		}
		else
			return 0;
	}
	else
		return 2;
}

void idoki(const ido* i) {
	if ((i->perc / 10) > 0) {
		std::cout << i->ora << ":" << i->perc << "\n";
	}
	else
		std::cout << i->ora << ":0" << i->perc << "\n";
}