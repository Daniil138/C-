#ifndef _CIRCLE_H
#define _CIRCLE_H
#include <iostream>
#include "abstract_shape.h"
#include "Point.h"
using namespace std;

class Circle :public Shape
{
    private:
        double R;
        Point Center;
    public:
        template <class class_value> Circle(class_value x, class_value y,class_value r );
        template <class class_value> Circle(class_value r);

        double getSquare()  override;
        double getPerimeter()  override;
        void name()  override;

};


template <class class_value>
Circle::Circle(class_value x, class_value y,class_value r )
{
    Center = Point(x, y);
    R = (double)(r);

}

template <class class_value>
Circle::Circle( class_value r )
{
    R = (double)(r);

}

#endif