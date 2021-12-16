#pragma once

#include "tanora.cpp"

struct nap {
	int oraszam;
	tanora* orak;
};

void napbe(nap*);
void napki(const nap*);
void delorak(const nap*);