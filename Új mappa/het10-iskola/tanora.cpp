#include "tanora.h"

void tanbe(tanora* t) {
	std::cout << "Tantargy neve: ";
	std::getline(std::cin>>std::ws, t->tantargy);
	std::cout << "Tanora kezdete: "<<std::endl;
	idobe(&t->kezd);
	std::cout << "Tanora vege: "<<std::endl;
	idobe(&t->vege);
}

bool utkozik(const tanora* t1, const tanora* t2) {
	if (idohas(&t1->kezd, &t2->kezd) == -1) {
		if (idohas(&t1->vege, &t2->kezd) == 1) {
			return true;
		}
		else if (idohas(&t1->vege, &t2->vege) == 1) {
			return true;
		}
		else
			return false;
	}
	if (idohas(&t1->kezd, &t2->kezd) == 1) {
		if (idohas(&t1->vege, &t2->vege) == -1) {
			return true;
		}
		else if (idohas(&t1->kezd, &t2->vege) == -1) {
			return true;
		}
		else
			return false;
	}
	else
		return false;
}

void tanki(const tanora* t) {
	std::cout << "Tantargy neve: ";
	std::cout << t->tantargy << "\n";
	std::cout << "Tanora kezdete: ";
	idoki(&t->kezd);
	std::cout << "Tanora vege: ";
	idoki(&t->vege);
}