#include "Convert.hpp"

Convert::Convert():_c(0), _i(0), _f(0), _d(0), _is_char_int_Impossible(false)
{
	std::cout << "default constructor Convert is called" << std::endl;
}

Convert::Convert(Convert const &obj):_c(obj._c), _i(obj._i), _f(obj._f), _d(obj._d), _is_char_int_Impossible(obj._is_char_int_Impossible)
{
	std::cout << "copy assignment Convert is called" << std::endl;
	*this = obj;
}

Convert::~Convert()
{
	//std::cout << "default destructor Convert is called" << std::endl;
}

Convert& Convert::operator=(Convert const &obj)
{
	if(this != &obj)
		std::cout << "you can't assign this to anthor" << std::endl; //const parameters can't be assigned
	return *this;
}

Convert::Convert(char c) : _c(c), _is_char_int_Impossible(false)
{
    _i = static_cast<int>(c);
    _f = static_cast<float>(c);
    _d = static_cast<double>(c);
}

Convert::Convert(float f) : _f(f), _is_char_int_Impossible(false)
{
    _c = static_cast<char>(f);
    _i = static_cast<int>(f);
    _d = static_cast<double>(f);
}

Convert::Convert(double d) : _d(d), _is_char_int_Impossible(false)
{
    _c = static_cast<char>(d);
    _i = static_cast<int>(d);
    _f = static_cast<float>(d);
}

Convert::Convert(int i) : _i(i), _is_char_int_Impossible(false)
{
    _c = static_cast<char>(i);
    _f = static_cast<float>(i);
    _d = static_cast<double>(i);
}


void
Convert::print()
{
    if (_is_char_int_Impossible)
        std::cout << "char : impossible" << std::endl;
    else if (_c < 32 || _c > 126)
        std::cout << "char : non displayable" << std::endl;
    else
        std::cout << "char : '" << _c << "'" << std::endl;
    
    if (_is_char_int_Impossible)
        std::cout << "int : impossible" << std::endl;
    else
        std::cout << "int : " << _i << std::endl;

    if (_f - (int)_f != (float)0)
        std::cout << "float : " << _f << "f" << std::endl;
    else
        std::cout << "float : " << _f << ".0f" << std::endl;

    if (_d - (int)_d != (double)0)
        std::cout << "double : " << _d << std::endl;
    else
        std::cout << "double : " << _d << ".0" << std::endl;
}

void
Convert::setCharIntImpossible(bool im)
{
    _is_char_int_Impossible = im;
}