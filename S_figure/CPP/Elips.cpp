#include "../Hfile/Elips.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


double Elips::getSquare() 
{
    return M_PI*R1*R2;
}

double Elips :: getPerimeter()
{
    return M_PI*2*(sqrt((R1*R1+R2*R2)/2));
}

void Elips :: name()
{
    std::cout << "Elips\n";
}