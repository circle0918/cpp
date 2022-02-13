#include "Point.hpp"
#include <cstdio>

float sign (Point a, Point b, Point c);
bool bsp( Point const a, Point const b, Point const c, Point const point);


int main( void ) {
Point a(1, 6);
Point b(4, 6);
Point c(3, 0);
//Point pt(3, 5);
Point pt(200, 300);

bool in = bsp(a, b, c, pt);

if (in)
	std::cout << "point is in the triangle" << std::endl;
else
	std::cout << "point isn't in the triangle" << std::endl;
return 0;
}