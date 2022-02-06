#ifndef SED_HPP
#define SED_HPP
#include <string>
#include <iostream>
#include <fstream>

class Sed{
private :
	std::ifstream _in;
	std::ofstream _out;
public :
	bool read(const std::string &file);
	void replace(const std::string &s1, const std::string &s2);
};

#endif
