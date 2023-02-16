#include <iostream>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso ps;
void nhapps(ps& a);
void xuatps(ps a);
int uocchunglonnhat(int a, int b);
ps rutgonps(ps& a);
ps tongps(ps a, ps b); 
ps hieups(ps a, ps b);
ps tichps(ps a, ps b);
ps thuongps(ps a, ps b);
int main()
{
	ps a;
	ps b;
	nhapps(a);
	xuatps(a);
	nhapps(b);
	xuatps(b);
	ps tong;
	tong = tongps(a, b);
	cout << "Tong 2 ps vua nhap: " << endl;
	xuatps(tong);
	ps hieu;
	hieu = hieups(a, b);
	cout << "Hieu 2 ps vua nhap: " << endl;
	xuatps(hieu);
	ps tich;
	tich = tichps(a, b);
	cout << "Tich 2 ps vua nhap: " << endl;
	xuatps(tich);
	ps thuong;
	thuong = thuongps(a, b);
	cout << "Thuong 2 ps vua nhap: " << endl;
	xuatps(thuong);
	return 0;
}

void nhapps(ps& a)
{
	cout << "Nhap tu so: "; 
	cin >> a.tu;
	cout << "Nhap mau so: ";
	cin >> a.mau;
}
void xuatps(ps a)
{
	cout << a.tu << "/" << a.mau << endl;
}
int uocchunglonnhat(int a, int b)
{
	int sobichia = 1;
	int uocchung = 1;
	while (sobichia <= a && sobichia <= b)
	{
		if (a % sobichia == 0 && b % sobichia == 0)
			uocchung = sobichia;
		sobichia++;
	}
	return uocchung;
}
ps rutgonps(ps& a)
{
	ps rutgon;
	int uocchung = uocchunglonnhat(a.tu, a.mau);
	a.tu = a.tu / uocchung;
	a.mau = a.mau / uocchung;
	return a;
}
ps tongps(ps a, ps b)
{
	ps tong;
	tong.tu = a.tu * b.mau + b.tu * a.mau;
	tong.mau = a.mau * b.mau;
	rutgonps(tong);
	return tong;
}
ps hieups(ps a, ps b)
{
	ps hieu;
	hieu.tu = a.tu * b.mau - b.tu * a.mau;
	hieu.mau = a.mau * b.mau;
	rutgonps(hieu);
	return hieu;
}
ps tichps(ps a, ps b)
{
	ps tich;
	tich.tu = a.tu * b.tu;
	tich.mau = a.mau * b.mau;
	rutgonps(tich);
	return tich;
}
ps thuongps(ps a, ps b)
{
	ps thuong;
	thuong.tu = a.tu * b.mau;
	thuong.mau = a.mau * b.tu;
	rutgonps(thuong);
	return thuong;
}