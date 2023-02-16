#pragma once
class SoPhuc
{
private:
	float fThuc;
	float fAo;
public:
	SoPhuc();
	SoPhuc(float a, float b);
	void NhapSP();
	void XuatSP();
	SoPhuc operator+(SoPhuc sp2);
	SoPhuc operator-(SoPhuc sp2);
	SoPhuc operator+(int b);
	bool operator>=(SoPhuc sp2);
	bool operator<=(SoPhuc sp2);
	SoPhuc(int t);
	float DinhGiaTri();
	float GetThuc();
	float GetAo();
	void SetThuc(float a);
	void SetAo(float b);
	void SetSP(float a, float b);
	void Copy(SoPhuc& c);
	//Destructor
	~SoPhuc()
	{

	}
};
