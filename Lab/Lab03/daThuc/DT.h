#pragma once
#include <iostream>
#include <string>
using namespace std;

class DT
{
private:
	float heso;
	float somu;
public:
	DT();
	DT(float nheso, float nsomu);
	float GiaTri(float x);
	friend istream& operator>>(istream& is, DT& a);
	friend ostream& operator<<(ostream& os, DT a);
	float GetSoMu();
	float GetHeSo();
	void SetSoMu(float newsomu);
	void SetHeSo(float newheso);
	void SetDT(DT newdt);
	DT operator=(DT a);
	bool operator==(DT a);
	bool operator!=(DT a);
	bool operator>(DT a);
	bool operator>=(DT a);
	bool operator<(DT a);
	bool operator<=(DT a);
	~DT()
	{

	}
};

