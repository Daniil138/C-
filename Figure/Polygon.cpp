#include "Polygon.h"
#include <iostream>




void Polygon::calc_sides()

{

	for (int i = 0; i < points.size() - 1; i++) {

		sides.push_back(points[i].calc_distance(points[i + 1]));

	}

	sides.push_back(points[points.size() - 1].calc_distance(points[0]));

}



Polygon::Polygon()

{

}



double Polygon::getSquare()

{

	double res = 0.0;

	for (int i = 0; i < points.size() - 1; i++) {

		res += points[i].x * points[i + 1].y;

		res += points[i + 1].x * points[i].y;

	}

	res += points[points.size() - 1].x * points[0].y;

	res += points[points.size() - 1].y * points[0].x;



	return res * 0.5;

}



double Polygon::getPerimeter()

{

	double res = 0.0;

	for (int i = 0; i < sides.size(); i++)

		res += sides[i];

	return res;

}



void Polygon::name()

{

	cout << "Polygon \n";

}