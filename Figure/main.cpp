#pragma once

#include <iostream>

#include "Treangle.h"

#include "Rectangle.h"

#include "Polygon.h"

#include "Circle.h"

#include "Elips.h"



using namespace std;



void check_trinagle();

void check_rectangle();

void check_polygon();

void check_circle();

void check_elipse();

void check_polimorph();



int main()

{

    //check_trinagle();

    //check_rectangle();

    //check_polygon();

    //check_circle();

    //check_elipse();

    check_polimorph();



}





void check_trinagle()

{

    ////треугольник

   
    Treangle T(0, 0,0, 5,5, 0);

     

    T.name();

    cout << T.getPerimeter() << '\t' << T.getSquare() << endl;





}



void check_rectangle()

{



    //прямоугольник

    Rectangle R(0, 0, 0, 5, 5, 5, 5, 0);

    R.name();

    cout << R.getPerimeter() << '\t' << R.getSquare() << endl;

}



void check_polygon()

{

    vector <int> A;

    A.push_back(0);

    A.push_back(0);

    A.push_back(5);

    A.push_back(0);

    A.push_back(5);

    A.push_back(5);

    A.push_back(0);

    A.push_back(5);

    Polygon p(A);

    p.name();

    cout << p.getSquare() << "\t" << p.getPerimeter() << endl;



}



void check_circle()

{

    

    int radius = 5;
    Point  p = Point(0, 0);



    Circle c1(0, 0, radius);


    Circle c2(p, radius);


    cout << "c1 \t" << c1.getSquare() << '\t' << c1.getPerimeter() << endl;

    cout << "c1 \t" << c2.getSquare() << '\t' << c2.getPerimeter() << endl;



}



void check_elipse()

{

    Point p(0, 0);

    int a = 10, b = 20;

    Elips el1(0,0, a, b), el2(p, a, b);

    el1.name();

    el2.name();

    cout << "c1 \t" << el1.getSquare() << '\t' << el1.getPerimeter() << endl;

    cout << "c1 \t" << el2.getSquare() << '\t' << el2.getPerimeter() << endl;



}



void check_polimorph()

{

    vector <Shape*> figures;

    figures.push_back(new Treangle(3, 4, 5));

    figures.push_back(new Circle(0, 0, 5));

    figures.push_back(new Rectangle(2, 5));

    figures.push_back(new Elips(0, 0, 4, 5));

    vector <int> A;

    A.push_back(0);

    A.push_back(0);

    A.push_back(5);

    A.push_back(0);

    A.push_back(5);

    A.push_back(5);

    A.push_back(0);

    A.push_back(5);

    figures.push_back(new Polygon(A));



    for (int i = 0; i < figures.size(); i++) {

        figures[i]->name();

        cout << "P=" << figures[i]->getSquare() << "\t S=" << figures[i]->getPerimeter() << endl;

    }







}



