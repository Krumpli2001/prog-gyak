#pragma once

#include "nap.cpp"

struct szemely {
	std::string nev;
	nap* orarend;
};

void szemelybe(szemely*);
void szemelyki(const szemely*);
void delszemely(const szemely*);