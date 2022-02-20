#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
    std::cout << "default Cat constructor is called" << std::endl;
}
Cat::Cat(const Cat &obj):Animal::Animal(obj)
{
}
Cat::~Cat()
{
    std::cout << "default Cat destructor is called" << std::endl;
}
Cat& Cat::operator=(const Cat &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
void Cat::makeSound() const
{
    std::cout << "Cat makes sound Meow" << std::endl;
}