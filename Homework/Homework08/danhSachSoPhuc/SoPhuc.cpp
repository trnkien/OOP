#include "SoPhuc.h"
#include <iostream>
using namespace std;

//Nhập
istream& operator>>(istream& is, SoPhuc& a)
{
    cout << "Nhap phan thuc: ";
    is >> a.fThuc;
    cout << "Nhap phan ao: ";
    is >> a.fAo;
    return is;
}
//Xuất
ostream& operator<<(ostream& os, SoPhuc a)
{
    os << a.fThuc;
    if (a.fAo < 0)
        cout << " ";
    else
        cout << " + ";
    os << a.fAo;
    cout << "i." << endl;
    return os;
}
//Gán
SoPhuc& SoPhuc::operator=(SoPhuc& a)
{
    this->fThuc = a.fThuc;
    this->fAo = a.fAo;
    return *this;
}

