#include "../Hfile/Geo.h"
#include <iostream>
#include <cmath>
using namespace std;


Point :: Point()
{
    x = y = 0.0;
}

Point :: Point(double x, double y)
{
    cout << "(" << x << " " << y << ")";

}

std::ostream& operator << (std::ostream &os, const Point &P)
{
    return os << "(" << P.x << ";" << P.y << ")";
}

Triangle :: Triangle()
{
    aria = 0.0;
}

double Triangle :: calc_arial()
{
        Point v1,v2;

        v1.x = vertexes[1].x - vertexes[0].x;
        v1.y = vertexes[1].y - vertexes[0].y;
        v2.x = vertexes[2].x - vertexes[0].x;
        v2.y = vertexes[2].y - vertexes[0].y;

        double s = (v1.x * v2.y - v1.y * v2.x)/2;
        s = s > 0 ? s : -s;

        return s;
}

std::ostream& operator << (std::ostream &os, const Triangle &Tr)
{
    return os << "S = " << Tr.aria << "\nТочка1 (" << Tr.vertexes[0].x << ";" << Tr.vertexes[0].y << ")\nТочка2 (" << Tr.vertexes[1].x << ";" << Tr.vertexes[1].y << ")\nТочка3 (" << Tr.vertexes[2].x << ";" << Tr.vertexes[2].y << ")\n";
}