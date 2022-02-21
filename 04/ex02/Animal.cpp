#include "Animal.hpp"

Animal::Animal():_type("Animal")
{
    std::cout << "default Animal constructor is called" << std::endl;
}
Animal::Animal(const Animal &obj)
{
    _type = obj._type;
}
Animal::~Animal()
{
    std::cout << "default Animal destructor is called" << std::endl;
}
Animal& Animal::operator=(const Animal &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}

std::string Animal::getType() const
{
    return (_type);
}