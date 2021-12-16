#include "nap.h"

void napbe(nap* n) {
	std::cout << "Hany orad van? ";
	std::cin >> n->oraszam;
	n->orak = new tanora[n->oraszam];
	if (n->oraszam > 0) {
		int i = 0;
		bool u = false;
		tanbe(n->orak + i);
		if (n->oraszam > 1) {
			do {
				i++;
				do {
					tanbe(n->orak + i);
					u = utkozik(n->orak + i, n->orak + i - 1);
					if (u) {
						std::cout << "Az orak utkoznek, add meg ujraz utolsot\n";
					}
				} while (u);
			} while (i < n->oraszam - 1);
		}
	}
	}

void napki(const nap* n) {
	std::cout << " informacioi: \n";
	std::cout << "Orak szama: " << n->oraszam<<"\n";
	std::cout << "\n";
	for (int i = 0; i < n->oraszam; i++) {
		tanki(n->orak+i);
		std::cout << "\n";
	}
}

void delorak(const nap* n) {
	delete[] n->orak;
}