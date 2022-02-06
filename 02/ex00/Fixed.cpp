#include <iostream>
#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed():_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
//	_val = obj.getRawBits();
	*this = obj;
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

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}