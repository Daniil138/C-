#include <iostream>
#include "Treangle.h"
using namespace std;



double Treangle::getSquare()
{
    Point v1, v2;

    v1.x = p[1].x - p[0].x;
    v1.y = p[1].y - p[0].y;
    v2.x = p[2].x - p[0].x;
    v2.y = p[2].y - p[0].y;

    double s = (v1.x * v2.y - v1.y * v2.x) / 2;
    s = s > 0 ? s : -s;

    return s;
}

double Treangle::getPerimeter()
{
    return a + b + c;
}


void Treangle::name()
{
    cout << "Treangle\n";
}