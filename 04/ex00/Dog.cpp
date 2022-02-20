#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
    std::cout << "default Dog constructor is called" << std::endl;
}
Dog::Dog(const Dog &obj):Animal::Animal(obj)
{
}
Dog::~Dog()
{
    std::cout << "default Dog destructor is called" << std::endl;
}
Dog& Dog::operator=(const Dog &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "Dog makes sound woof" << std::endl;
}