#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "default Cure constructor is called" << std::endl;
	_type = "cure";
}
Cure::Cure(Cure const &obj): AMateria(obj)
{
}
Cure::~Cure()
{
	std::cout << "default Cure destructor is called" << std::endl;
}
Cure &Cure::operator=(const Cure &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
AMateria* Cure::clone() const
{
	return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}