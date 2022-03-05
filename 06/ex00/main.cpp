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
    void print();
private:
    char _c;
    int _i;
    float _f;
    double _d;
    bool flag_char_impossible;
    bool flag_char_non_displayable;
    bool flag_int_impossible;
};

Convert::Convert(char c) : _c(c)
{
    _i = static_cast<int>(c);
    _f = static_cast<float>(c);
    _d = static_cast<double>(c);
}

void
Convert::print()
{
    std::cout << "char : '" << _c << "'" << std::endl;
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

void detectType(const std::string& str)
{
    std::cout << "bol: " << str << " length : " << str.length() << std::endl;
    
    if (str.length() == 3 && str[0] == '\'' && str[2] == '\'') {
        char param = str[1];
        Convert c_char = Convert(param);
        c_char.print();
        return;
    //}
    // if (str.back() == 'f') {
    //     double d = strtod(str.substr(0, str.size()-1).c_str(), NULL);
    //     if (d != 0.0)
    //     {
    //         float param = (float)d;
    //         Convert c_float = Convert(param);
    //         c_float.print();
    //         return;
    //     }
    // }

    // if (str.find('.') != std::string::npos)

    } else {
        std::cout << "wrong type" << std::endl;
    }
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