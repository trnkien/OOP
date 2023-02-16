#pragma once
#include "TuGIac.h"
class HinhThang :public TuGiac
{
protected:
    bool CheckHinhThang();
public:
    HinhThang();
    HinhThang(Point newds[4]);
    void Nhap();
    void Xuat();
    Point* Getds();
    void Set();
};