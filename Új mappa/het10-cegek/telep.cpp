#include "telep.h"


void telepbe(telephely* t) {
	std::cout << "Helyseg neve: \n";
	std::cin >> t->HelysegNev;
	std::cout << "Alapitas datuma: \n";
	datumbe(&t->Alapitas);
	std::cout << "Utolso ev bevetele: \n";
	std::cin >> t->Bevetel;
}

void telepki(const telephely* t) {
	std::cout << "Helyseg neve: ";
	std::cout << t->HelysegNev<<std::endl;
	std::cout << "Alapitas datuma: ";
	datumki(&t->Alapitas);
	std::cout << "Utolso ev bevetele: ";
	std::cout << t->Bevetel;
}