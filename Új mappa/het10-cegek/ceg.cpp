#include "datum.cpp"
#include "telep.cpp"
#include "ceg.h"

void cegbe(ceg* c) {
	std::cout << "A ceg neve: \n";
	std::getline(std::cin, c->Cegnev);
	std::cout << "Alapitas: \n";
	datumbe(&c->Alapitas);
	std::cout << "Telephelyek szama: \n";
	std::cin >> c->telepszam;
	c->telepek = new telephely[c->telepszam];
	for (int i = 0; i < c->telepszam; i++) {
		std::cout << "Az " << i + 1 << ". telephely adatai: \n";
		telepbe(c->telepek + i);
	}
}

int bevetel(const ceg* c) {
	int ossz = 0;
	for (int i = 0; i < c->telepszam; i++) {
		ossz = ossz + c->telepek[i].Bevetel;
	}
	return ossz;
}

void cegki(const ceg* c) {
	std::cout << "A ceg neve: \n";
	std::cout<< c->Cegnev;
	std::cout << "Alapitas: \n";
	datumki(&c->Alapitas);
	std::cout << "Telephelyek szama: \n";
	std::cout << c->telepszam;
	std::cout << "Telepek: \n";
	for (int i = 0; i < c->telepszam; i++) {
		std::cout << "Az " << i + 1 << ". telephely adatai: \n";
		telepki(c->telepek + i);
	}
	std::cout << "Elmult ev bevetele: " << bevetel(c) << "\n";
}

void cegdel(const ceg* c) {
	delete[] c->telepek;
}