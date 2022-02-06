#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

class Karen{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string array[4];
	void (Karen::*f[4])(void);

public:
	Karen(void);
	~Karen(void);
	void complain( std::string level);

};

#endif