#include "Circle.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>



double Circle::getSquare()

{
    return M_PI * R * R;
}

double Circle::getPerimeter()
{
    return M_PI * R * 2;
}

void Circle::name()
{
    std::cout << "Circle\n";
}