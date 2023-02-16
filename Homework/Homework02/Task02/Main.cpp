#include "PS.h"
#include <iostream>

int main()
{
	ps* mangps = new ps[100];
	int soluong;
	nhapmangps(mangps, soluong);
	xuatmangps(mangps, soluong);
	delete[] mangps;
	return 0;
}
