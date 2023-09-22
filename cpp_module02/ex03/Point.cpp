#include "Point.hpp"

// triangle area = 1/2 | (x1 * (y3 - y2) + x2 * (y1 - y3) + x3 * (y2 - y1)) |

// how to proof : form a rectangle then substract rectangle are from the 3 right triangles

float Point::triangle_area(Point const &a, Point const &b, Point const &c)
{
	float x1 = a.x.toFloat(), y1 = a.y.toFloat();
	float x2 = b.x.toFloat(), y2 = b.y.toFloat();
	float x3 = c.x.toFloat(), y3 = c.y.toFloat();

	float res = x1 * (y3 - y2) + x2 * (y1 - y3) + x3 * (y2 - y1);
	if (res < 0)
		res *= -1;
	res /= 2.0;
	return (res);
}

Point::Point(void) : x(Fixed()), y(Fixed()) {
}

Point::Point(float const &a, float const &b) : x(Fixed(a)), y(Fixed(b)){
}

Point::Point(Point const &other):x(other.x), y(other.y){
	
}

Point Point::operator = (Point const &other){
	return (Point(other));
}

Point::~Point(){
}