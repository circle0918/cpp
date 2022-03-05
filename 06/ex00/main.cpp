#include "main.hpp"
#include <iostream>
#include <string>

bool checkChar(std::string str)
{
    if(str.length() == 3 && str[0] == '\'' && str[2] == '\'')
        return true;
    return false;
}

class Convert
{
public:
    Convert(char c);
    Convert(float f);
    void print();
    void setImpossible(bool im);
private:
    char _c;
    int _i;
    float _f;
    double _d;
    bool _isImpossible;
};

Convert::Convert(char c) : _c(c), _isImpossible(false)
{
    _i = static_cast<int>(c);
    _f = static_cast<float>(c);
    _d = static_cast<double>(c);
}

Convert::Convert(float f) : _f(f), _isImpossible(false)
{
    _c = static_cast<char>(f);
    _i = static_cast<int>(f);
    _d = static_cast<double>(f);
}

static bool isZero(const std::string& s)
{
    for(size_t i = 0; i < s.length(); i++)
        if (!(s[i] == '0' || s[i] == '.'))
            return false;
    return true;
}

static bool isImpossible(const std::string& s)
{
    return (s == "inf" || s == "+inf" || s == "-inf"
            || s == "nan" || s == "+nan" || s == "-nan");
}

void
Convert::print()
{
    if (_isImpossible)
        std::cout << "char : impossible" << std::endl;
    else if (_c < 32 || _c > 126)
        std::cout << "char : non displayable" << std::endl;
    else
        std::cout << "char : '" << _c << "'" << std::endl;
    
    if (_isImpossible)
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
Convert::setImpossible(bool im)
{
    _isImpossible = im;
}

void detectType(const std::string& str)
{
    if (str.length() == 3 && str[0] == '\'' && str[2] == '\'') {
        char param = str[1];
        Convert c_char = Convert(param);
        c_char.print();
        return;
    }
    if (str[str.length()-1] == 'f') {
        const std::string ss = str.substr(0, str.size()-1);
        double d = strtod(ss.c_str(), NULL);
        if ((d == 0.0 && isZero(ss))
            || d != 0.0)
        {
            float param = (float)d;
            Convert c_float = Convert(param);
            c_float.setImpossible(isImpossible(ss));
            c_float.print();
            return;
        }
    }
    if (str.find('.') != std::string::npos)

    std::cout << "wrong type" << std::endl;
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "wrong arguement" << std::endl;
        return 1;
    }
    try
    {
        detectType(av[1]);


        const std::string s = av[1];
        //char n = 'b';
        //int n = 42;
        //float n = 42.123456789;
        //double n = 42.123456789;
        double n = strtod(s.c_str(), NULL);

        char c = static_cast<char>(n);
        std::cout<< "c: " << c << "\n";
        std::cout<< "c: " << int(c) << "\n";
        int i = static_cast<int>(n);
        std::cout<< "i: " << i << "\n";        
        float f = static_cast<float>(n);
        std::cout<< "f: " << f << "\n";
        double d = static_cast<double>(n);
        std::cout<< "d: " << d << "\n";   
 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}