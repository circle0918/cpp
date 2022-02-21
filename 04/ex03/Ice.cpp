#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "default Ice constructor is called" << std::endl;
	_type = "ice"
}
Ice::Ice(Ice const &obj)
{
	_type = obj._type;
}
Ice::~Ice()
{
	std::cout << "default Ice destructor is called" << std::endl;
}
Ice &Ice::operator=(const Ice &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}