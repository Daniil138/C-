#pragma once
#include <iostream>


// ����������� ����� ������ 
class Shape
{
public:
 
    virtual double getSquare() = 0;     // ������� ������
    virtual double getPerimeter() = 0;  // �������� ������
    virtual void name() = 0;
};




