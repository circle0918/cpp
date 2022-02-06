#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{
private:
	int _val;
	static const int _bits;

public:
	Fixed();
	Fixed(const Fixed& obj);
	~Fixed();
	Fixed& operator=(const Fixed& obj);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif