#include "Point.hpp"
#include <cstdio>

float sign (Point a, Point b, Point c)
{
    //return ((a.getX() - c.getX()) * (b.getY() - c.getY())
	//- (b.getX() - c.getX()) * (a.getY() - c.getY())).toFloat();

	Fixed res = ((a.getX() - c.getX()) * (b.getY() - c.getY())
	- (b.getX() - c.getX()) * (a.getY() - c.getY()));
	// printf("res: _val : %d\n", res.getRawBits());
	// printf("res: real : %d\n", res.toInt());

	return res.toFloat();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
	//printf("d1: %f\n", d1);
    d2 = sign(point, b, c);
	//printf("d2: %f\n", d2);
    d3 = sign(point, c, a);
	//printf("d3: %f\n", d3);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}