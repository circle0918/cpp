#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
private:
	int _val;
	static const int _bits;

public:
	Fixed();
	Fixed (const int val);
	Fixed (const float val);
	Fixed(const Fixed& obj);
	~Fixed();

	Fixed& operator=(const Fixed& obj);
	
	int getRawBits(void) const;
	void setRawBits (int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif