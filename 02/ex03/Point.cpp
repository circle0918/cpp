#include "Point.hpp"

Point::Point():_x(0),_y(0)
{
}

Point::~Point()
{
}

Point::Point(const float a, const float b):_x(a),_y(b)
{
	// printf("cons point: a: %f\n", a);
	// printf("cons point: _x: %f\n", _x.toFloat());
}

Point::Point(const Point& obj):_x(obj._x),_y(obj._y)
{
}

Point Point::operator=(const Point& obj)
{
	if(this != &obj)
	{
		Point tmp(obj._x.getRawBits(), obj._y.getRawBits());
		this->~Point();
		return tmp;
	}
	return *this;
}

Fixed Point::getX()
{
	return (_x);
}

Fixed Point::getY()
{
	return (_y);
}