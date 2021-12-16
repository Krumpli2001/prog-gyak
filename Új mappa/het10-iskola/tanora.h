#pragma once

#include "ido.cpp"
#include <string>

struct tanora {
	std::string tantargy;
	ido kezd;
	ido vege;
};

void tanbe(tanora*);
bool utkozik(const tanora*, const tanora*);
void tanki(const tanora*);