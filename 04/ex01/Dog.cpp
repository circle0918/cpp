#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "default Dog constructor is called" << std::endl;
    _type = "Dog";
    _brain = new Brain;
}
Dog::Dog(const Dog &obj):Animal::Animal(obj)
{
}
Dog::~Dog()
{
    std::cout << "default Dog destructor is called" << std::endl;
    delete _brain;
}
Dog& Dog::operator=(const Dog &obj)
{
    if(this != &obj)
    {
        _type = obj._type;
        _brain = new Brain(*obj._brain);
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "Dog makes sound woof" << std::endl;
}

Brain &Dog::getBrain()
{
    return *_brain;
}