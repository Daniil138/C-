#include <cmath>;
#include <iostream>;
#include "../Hfile/Point.h"

using namespace std;

Point::Point()
{
    x=0;
    y=0;
}



//Point
const double 
Point::calc_distance(const Point& p) {

	double dx = x - p.x;
	double dy = y - p.y;

	return sqrt(dx * dx + dy * dy);
}


istream& operator>>(istream& is, Point a)
{
	return is >> a.x >> a.y;
}



ostream& operator<<(ostream& os, Point a)
{
	return os << "(" << a.x << ", " << a.y << ")\n";
}