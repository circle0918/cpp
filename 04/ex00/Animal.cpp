#include "Animal.hpp"

Animal::Animal():_type("")
{
    std::cout << "default Animal constructor is called" << std::endl;
}
Animal::Animal(const Animal &obj)
{
    std::cout << "default Animal constructor is called" << std::endl;
    _type = obj._type;
}
Animal::~Animal()
{
}
Animal& Animal::operator=(const Animal &obj)
{
}
void const Animal::makeSound()
{
}
std::string Animal::GetType()
{
    return (_type);
}