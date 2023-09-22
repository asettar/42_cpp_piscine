#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private :
	Fixed const x;
	Fixed const y;

public :
	Point();
	Point(float const &a, float const &b);
	Point(Point const &other);
	Point operator = (Point const &other);
	static float triangle_area(Point const &a, Point const &b, Point const &c);
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif