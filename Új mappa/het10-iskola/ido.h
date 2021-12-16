#pragma once

#include <iostream>

struct ido {
	int ora;
	int perc;
};

void idobe(ido*);
int idohas(const ido* i1, const ido* i2);
void idoki(const ido* i);