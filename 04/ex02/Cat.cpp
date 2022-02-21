#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "default Cat constructor is called" << std::endl;
    _type = "Cat";
    _brain = new Brain;
}
Cat::Cat(const Cat &obj):Animal::Animal(obj)
{
}
Cat::~Cat()
{
    std::cout << "default Cat destructor is called" << std::endl;
    delete _brain;
}
Cat& Cat::operator=(const Cat &obj)
{
    if(this != &obj)
    {
        _type = obj._type;
        _brain = new Brain(*obj._brain);
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout << "Cat makes sound Meow" << std::endl;
}

Brain &Cat::getBrain()
{
    return *_brain;
}