#pragma once
#include<vector>
using namespace std;

struct Point {
    double x;
    double y;
};

class TuGiac
{
protected:
    Point ds[4];
public:
    //constructor and destructor
    TuGiac();
    TuGiac(Point* coor);
    //Input and Output
    void Nhap();
    void Xuat();
    //Destruction
    ~TuGiac();
    //Setter
    void SetPoint(Point ds[4]);
    void Set();
    //Getter
    Point* GetPoint() { return ds; }
    bool Check();
};

double MultiPoint(Point c1, Point c2);
double Module(Point c1, Point c2);
Point VectorPoint(Point c1, Point c2);