#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
    std::cout << "default WrongCat constructor is called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &obj):WrongAnimal::WrongAnimal(obj)
{
}
WrongCat::~WrongCat()
{
    std::cout << "default WrongCat destructor is called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes sound Meow" << std::endl;
}