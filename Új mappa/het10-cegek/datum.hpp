#pragma once

#include <iostream>

struct datum {
	int ev;
	int ho;
	int nap;
};

void datumbe(datum*);
int dhasonlit(const datum*, const datum*);
void datumki(const datum*);