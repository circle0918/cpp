#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
    std::cout << "default WrongAnimal constructor is called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    _type = obj._type;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "default WrongAnimal destructor is called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}