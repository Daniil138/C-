#pragma once
#ifndef _GEOMETRY_H
#define _GEOMETRY_H
#include <iostream>

//Класс точка для представления точки 
class Point
{
public:

    double x, y;

    Point();

    Point(double x, double y);

};
std::ostream& operator << (std::ostream &os, const Point &P);

//Класс треугольник для представления трех точке в треугольник 
class Triangle
{
public:

    Point vertexes[3];

    double aria;

    Triangle();

    double calc_arial();

};
std::ostream& operator << (std::ostream &os, const Triangle &Tr);

#endif
