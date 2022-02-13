#include <iostream>
#include <cstdio>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed():_val(0)
{
}

Fixed::Fixed(const Fixed& obj)
{
	//_val = obj.getRawBits();
	*this = obj;
}

Fixed::Fixed (const int val)
{
	setRawBits( val << _bits);
	//printf("int value %d\n", _val);
}

Fixed::Fixed (const float val)
{
	setRawBits( roundf(val * (1 << _bits)));
//	printf("fff : %d\n", _val);
}

Fixed::~Fixed()
{	
}

bool Fixed::operator>(const Fixed& obj)
{
	return (_val > obj.getRawBits());
}

bool Fixed::operator<(const Fixed& obj)
{
	return (_val < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed& obj)
{
	return (_val >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed& obj)
{
	return (_val >= obj.getRawBits());
}

bool Fixed::operator==(const Fixed& obj)
{
	return (_val == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed& obj)
{
	return (_val != obj.getRawBits());
}

Fixed Fixed::operator+(const Fixed& obj)
{
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& obj)
{
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed& obj)
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj)
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed Fixed::operator++(int) // a++
{
	Fixed tmp((float)_val / (float)(1 << _bits));
	_val++;
	return tmp;
}

Fixed& Fixed::operator++(void) // ++a
{
	_val++;
	return *this;
}

Fixed& Fixed::operator--(void) // --a
{
	_val--;
	return *this;
}

Fixed Fixed::operator--(int) // a--
{
	Fixed tmp((float)_val / (float)(1 << _bits));
	_val--;
	return tmp;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	_val = obj.getRawBits();
	return *this;
}

const Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);	
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);	
}

const Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);	
}
	
float Fixed::toFloat( void ) const
{
	return ((float)_val / (float)(1 << _bits));
}
int Fixed::toInt( void ) const
{
	return (_val >> _bits);
}

int Fixed::getRawBits( void ) const
{
	return this->_val;
}

void Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}