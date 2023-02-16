#include "TuGIac.h"
#include <iostream>
#include <cmath>
using namespace std;

void TuGiac::Nhap()
{
    do
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Nhap toa do [" << i + 1 << "]: " << endl;
            cout << "Nhap hoanh do: ";
            cin >> ds[i].x;
            cout << "Nhap tung do: ";
            cin >> ds[i].y;
        }
        if (this->Check() == false)
            cout << "Khong phai tu giac ! Nhap lai: " << endl;
    } while (this->Check() == false);
}

void TuGiac::Xuat()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "[" << i + 1 << "]: ";
        cout << "(" << ds[i].x << ", " << ds[i].y << ")" << "\n";
    }
    cout << endl;
}

//Quadrangle definition
TuGiac::TuGiac()
{
    for (int i = 0; i < 4; i++)
    {
        ds[i].x = 0;
        ds[i].y = 0;
    }
}

TuGiac::TuGiac(Point* ds) {
    SetPoint(ds);
}

TuGiac::~TuGiac()
{

}

void TuGiac::SetPoint(Point newds[4]) 
{
    for (int i = 0; i < 4; i++)
        ds[i] = newds[i];
}

void TuGiac::Set() 
{
    cout << "====== UPDATE =======" << endl;
    Point c[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Point " << i + 1 << " (x,y): ";
        cout << "Nhap hoanh do: ";
        cin >> c[i].x;
        cout << "Nhap tung do: ";
        cin >> c[i].y;
    }
    SetPoint(c);
}

double MultiPoint(Point c1, Point c2) {
    return c1.x * c2.x + c1.y * c2.y;
}
double Module(Point c1, Point c2) {
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}

Point VectorPoint(Point c1, Point c2) {
    Point c;
    c.x = c1.x - c2.x;
    c.y = c1.y - c2.y;
    return c;
}

bool TuGiac::Check()
{
    for (int i = 0; i < 3; i++)
        for (int j = i+1; j < 4; j++)
            if (ds[i].x == ds[j].x && ds[i].y == ds[j].y)
                return false;
    return true;
}