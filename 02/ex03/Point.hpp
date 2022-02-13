#include "Fixed.hpp"

class Point{
	public:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(const float a, const float b);
		Point(const Point& obj);
		~Point();
		Point operator=(const Point& obj);
		Fixed getX();
		Fixed getY();
		
};