#include <iostream>

int checkType(std::string str)
{
    void str;
    if (checkChar(str))
        return CHAR;
    // if (checkInt(str))
    //     return INT;
    // if (checkFloat(str))
    //     return FLOAT;
    // if (checkDouble(str))
    //     return DOUBLE;
    return wType;
}

void parsingType(std::string str)
{
    std::string arg(str);
    int check = checkType(arg);
    if (check == wType)
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
        parsingType(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}