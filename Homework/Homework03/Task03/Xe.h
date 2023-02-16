#pragma once
#include "BanhXe.h"
#include <string>
class Xe
{
private:
	std::string NameCar;
	int YearCar;
	BanhXe* ListTyres;
	int SoluongBanhXe;
public:
	void NhapXe();
	void XuatXe();
};


