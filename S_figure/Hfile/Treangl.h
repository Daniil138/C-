#include "abstract_shape.h"
#include "Point.h"
#include <iostream>



// Класс прямоугольник 
class Treangle : public Shape 
{
    private:
        double a, b, c;
        Point p[2];
    public:
        template <class class_value> Treangle(class_value x1, class_value y1, class_value x2, class_value y2,
                                                class_value x3, class_value y3);

        template <class class_value> Treangle(class_value A, class_value B, class_value C);
        

        double getSquare()  override;
        double getPerimeter()  override;
        void name()  override;
};


template<class class_value>
inline Treangle::Treangle(class_value A, class_value B, class_value C)
{
    a = (double)(A);
    b = (double)(B);
    c = (double)(C);

}

template<class class_value>
inline Treangle::Treangle(class_value x1, class_value y1, class_value x2, class_value y2,class_value x3, class_value y3)
{
    p[0] = Point(x1, y1);
    p[1] = Point(x2, y2);
    p[2] = Point(x3, y3);

    a = p[0].calc_distance(p[1]);
    b = p[1].calc_distance(p[2]);
    c = p[2].calc_distance(p[0]);
}

