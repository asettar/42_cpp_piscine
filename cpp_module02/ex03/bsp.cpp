#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	abc_area = Point::triangle_area(a, b, c);
	float	apc_area = Point::triangle_area(a, point, c);
	float	bpc_area = Point::triangle_area(b, point, c);
	float	apb_area = Point::triangle_area(a, point, b);
	if (!abc_area || !apc_area || !bpc_area)
		return (false);
	return (apc_area + bpc_area + apb_area == abc_area);
}