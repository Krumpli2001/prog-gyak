#pragma once

#include <iostream>
#include <string>
#include "datum.hpp"

struct telephely {
	std::string HelysegNev;
	datum Alapitas;
	int Bevetel;
};
void telepbe(telephely*);
void telepki(const telephely*);