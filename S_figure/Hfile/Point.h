#include <iostream>
using namespace std;



//Класс точка
class Point 
{
    public:
        double x, y;
        template <class class_value> Point(class_value ax, class_value ay);
        Point();

        const double calc_distance(const Point& p);
		friend istream& operator >>(istream& is,Point a);
		friend ostream& operator <<(ostream& os,Point a);
};


template<class class_value>
inline Point::Point(class_value ax, class_value ay)
{
    x = ax;
    y = ay;
}