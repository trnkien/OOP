#pragma once
#include "QuanCo.h"
#include "TuongS.h"
#include "Ma.h"
#include "Phao.h"
#include "Si.h"
#include "Tot.h"
#include "TuongJ.h"
#include "Xe.h"
#include <iostream>
using namespace std;

class BanCo
{
private:
	int option;
	QuanCo** DanhSach;
public:
	BanCo();
	virtual void Nhap();
	virtual void Xuat();
	~BanCo();
};

