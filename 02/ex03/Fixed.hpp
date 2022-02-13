#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cstdio>


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

	bool operator>(const Fixed& obj);
	bool operator<(const Fixed& obj);
	bool operator>=(const Fixed& obj);
	bool operator<=(const Fixed& obj);
	bool operator==(const Fixed& obj);
	bool operator!=(const Fixed& obj);
	Fixed operator+(const Fixed& obj);
	Fixed operator-(const Fixed& obj);
	Fixed operator*(const Fixed& obj);
	Fixed operator/(const Fixed& obj);
	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);
	Fixed& operator=(const Fixed& obj);

//https://www.ibm.com/docs/en/zos/2.4.0?topic=only-static-member-functions-c
	static const Fixed& min(Fixed &obj1, Fixed &obj2);
	static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
	static const Fixed& max(Fixed &obj1, Fixed &obj2);
	static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
	
	int getRawBits(void) const;
	void setRawBits (int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif