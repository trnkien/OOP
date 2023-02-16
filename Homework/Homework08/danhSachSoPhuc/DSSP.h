#pragma once
#include "SoPhuc.h"
#include <iostream>
#include <string>
class DSSP
{
private:
	SoPhuc* dssp;
	int soluong;
public:
	friend istream& operator>>(istream& is, DSSP& a);
	friend ostream& operator<<(ostream& os, DSSP a);
	DSSP& operator=(DSSP& a);
	SoPhuc operator[](int i);
};

