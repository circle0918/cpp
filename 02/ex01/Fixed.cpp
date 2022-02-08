#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed():_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	//_val = obj.getRawBits();
	*this = obj;
}

Fixed::Fixed (const int val)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits( val << _bits);
	//printf("int value %d\n", _val);
}

Fixed::Fixed (const float val)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits( roundf(val * (1 << _bits)));
//	printf("fff : %d\n", _val);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_val = obj.getRawBits();
	return *this;
}
	
float Fixed::toFloat( void ) const
{
	//printf("before float %f", float(_val));
//	printf("after float %f", (float)_val / (float)(1 << _bits));
	return ((float)_val / (float)(1 << _bits));
}
int Fixed::toInt( void ) const
{
	return (_val >> _bits);
	//printf("int value %d\n", _val);
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