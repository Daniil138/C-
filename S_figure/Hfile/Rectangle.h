#include "abstract_shape.h"
#include "Point.h"
#include <iostream>



// Класс прямоугольник 
class Rectangle : public Shape 
{
    private:
        double a,b;
        Point p[3];
    public:
        template <class class_value> Rectangle(class_value x1, class_value y1, class_value x2, class_value y2,
                                                class_value x3, class_value y3, class_value x4, class_value y4);

        template <class class_value> Rectangle(class_value A, class_value B);
        

        double getSquare()  override;
        double getPerimeter()  override;
        void name()  override;
};


template<class class_value>
inline Rectangle::Rectangle(class_value A, class_value B)
{
    a = (double)(A);
    b = (double)(B);
}

template<class class_value>
inline Rectangle::Rectangle(class_value x1, class_value y1, class_value x2, class_value y2,class_value x3, class_value y3, class_value x4, class_value y4)
{
    p[0] = Point(x1, y1);
    p[1] = Point(x2, y2);
    p[2] = Point(x3, y3);
    p[3] = Point(x4, y4);

    a = p[0].calc_distance(p[1]);
    b = p[1].calc_distance(p[2]);
}

