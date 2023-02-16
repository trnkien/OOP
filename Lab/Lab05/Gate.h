#pragma once
#include "Nguoi.h"

class Gate
{
private:
	int soluong;
	Nguoi** ds;
public:
	Gate();
	void Nhap();
	int GetSoluong();
	Nguoi** Getds();
	~Gate();
};

