#pragma once
#include "Diem.h"
class Circle
{
private:
	int R;
	Diem Tam;
public:
	void NhapHinhtron();
	void XuatHinhtron();
	Circle();
	Circle(Diem newTam, int newR);
	int GetR();
	Diem GetTam();
	void SetR(int newR);
	void SetTam(Diem newTam);
	void SetToado(Diem newTam, int newR);
	Circle(Circle& a);
	~Circle();
};

