#ifndef _Shape_H
#define _shape_H
#include <iostream>


// Абстрактный класс фигура 
class Shape
{
public:
    virtual double getSquare() = 0;     // площадь фигуры
    virtual double getPerimeter()  = 0;  // периметр фигуры
    virtual void name() = 0;
};


#endif

