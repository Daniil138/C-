#include "Rectangle.h"
#include <iostream>



double Rectangle::getSquare()
{
    return a * b;
}

double Rectangle::getPerimeter()
{
    return a * 2 + b * 2;
}

void Rectangle::name()
{
    std::cout << "Rectangle\n";
}