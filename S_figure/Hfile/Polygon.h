#include <vector>
#include <iostream>
#include "Point.h"
#include "abstract_shape.h"







class Polygon_exception {



};



class Polygon : public Shape
{

private:

	vector <Point> points;

	vector <double> sides;



	void calc_sides();

public:

	Polygon();

	template <class value_class> Polygon(vector <value_class> coords);

	template <class value_class> Polygon(vector <Point> coords);

	double calc_area();

	double calc_perimeter();

	void name();



};



template<class value_class>

inline Polygon::Polygon(vector<value_class> coords)

{

	int coor_size = coords.size();

	if (coor_size % 2 != 0 && coor_size < 4) {

		cout << "Array size is not enough";

		throw Polygon_exception();

		

	}

	else {

		for (int i = 0; i < coor_size-1; i+=2)

			points.push_back(Point(coords[i], coords[i + 1]));

		calc_sides();

	}

}





template<class value_class>

inline Polygon::Polygon(vector<Point> coords) {

	int coor_size = coords.size();

	if (coor_size % 2 != 0 && coor_size < 2) {

		cout << "Array size is not enough";

		throw Polygon_exception();



	}

	else {

		for (int i = 0; i < coor_size; i++)

			points.push_back(coords[i]);

		calc_sides();

	}

}