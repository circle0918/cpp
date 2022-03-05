#include <iostream>
#include <string>
#include "stdlib.h"
#include "Convert.hpp"

static bool isZero(const std::string& s)
{
    for(size_t i = 0; i < s.length(); i++)
        if (!(s[i] == '0' || s[i] == '.'))
            return false;
    return true;
}

static bool isInfinite(const std::string& s)
{
    return (s == "inf" || s == "+inf" || s == "-inf"
            || s == "nan" || s == "+nan" || s == "-nan");
}

static void detectType(const std::string& s)
{
    if (s.length() == 3 && s[0] == '\'' && s[2] == '\'') {
        char param = s[1];
        Convert c_char = Convert(param);
        c_char.print();
        return;
    }
    double d = strtod(s.c_str(), NULL);
    if ((d == 0.0 && isZero(s))
        || d != 0.0)
    {
        const std::string ss = s.substr(0, s.length() - 1);
        if (isInfinite(ss) || (!isInfinite(s) && s[s.length()-1] == 'f'))
        {
           
            float param = (float)d;
            Convert c_float = Convert(param);
            c_float.setCharIntImpossible(isInfinite(ss));
            c_float.print();
            return;
        }

        if ((s.find('.') != std::string::npos) || isInfinite(s))
        {
            double param = d;
            Convert c_double = Convert(param);
            c_double.setCharIntImpossible(isInfinite(s));
            c_double.print();
            return;
        }

        int param = (int)d;
        Convert c_int = Convert(param);
        c_int.print();
        return;
    }
    std::cout << "wrong type" << std::endl;
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "wrong arguement" << std::endl;
        return 1;
    }
    detectType(av[1]); 
    return (0);
}