#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>

class Convert
{
public:
	Convert();
	Convert(Convert const &obj);
	virtual ~Convert();
    Convert& operator=(Convert const &obj);

    Convert(char c);
    Convert(float f);
    Convert(double d);
    Convert(int i);
    void print();
    void setCharIntImpossible(bool im);
private:
    char _c;
    int _i;
    float _f;
    double _d;
    bool _is_char_int_Impossible;
};

#endif