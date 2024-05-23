#pragma once
#include <iostream>
#include "abstract_shape.h"
#include "Point.h"
using namespace std;

class Elips :public Shape
{
    private:
        double R1, R2;
        Point Center;
    public:
        template <class class_value> Elips(class_value x, class_value y,class_value r1, class_value r2 );
        template <class class_value> Elips(class_value r1, class_value r2);

        double getSquare()  override;
        double getPerimeter()  override;
        void name()  override;

};


template <class class_value>
Elips::Elips(class_value x, class_value y,class_value r1, class_value r2 )
{
    Center = Point(x, y);
    R1 = (double)(r1);
    R2 = (double)(r2);

}

template <class class_value>
Elips::Elips( class_value r1, class_value r2 )
{
    R1 = (double)(r1);
    R2 = (double)(r2);

}