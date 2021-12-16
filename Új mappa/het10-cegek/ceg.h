#pragma once

#include <iostream>
#include <string>
#include "telep.h"
#include "datum.hpp"

struct ceg {
	std::string Cegnev;
	datum Alapitas;
	telephely* telepek;
	int telepszam;
};
void cegbe(ceg*);
int bevetel(const ceg*);
void cegki(const ceg*);
void cegdel(const ceg*);