#include "datum.hpp"

void datumbe(datum* d) {
	std::cout << "EV: \n";
	std::cin >> d->ev;
	std::cout << "HONAP: \n";
	std::cin >> d->ho;
	std::cout << "NAP: \n";
	std::cin >> d->nap;
}

//Ha 1, a masodik datum a regebbi, ha -1 akkor az elsõ
int dhasonlit(const datum* d1, const datum* d2) {
	int idat1, idat2;
	idat1 = d1->ev * 1000 + d1->ho * 10 + d1->nap;
	idat2 = d2->ev * 1000 + d2->ho * 10 + d2->nap;
	if (idat1 > idat2) {
		return 1;
	}
	if (idat1 == idat2) {
		return 0;
	}
	else return -1;
}

void datumki(const datum* d) {
	std::cout << d->ev << "." << d->ho << "." << d->nap << ".\n";
}