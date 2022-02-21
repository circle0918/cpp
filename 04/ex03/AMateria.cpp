#include "AMateria.hpp"

AMateria::AMateria():_type("")
{
	std::cout << "default AMateria constructor is called" << std::endl;
}
AMateria::AMateria(std::string const & type)
{
	_type = type;
}
AMateria::~AMateria()
{
	std::cout << "default AMateria destructor is called" << std::endl;
}
AMateria &AMateria::operator=(const AMateria &obj)
{
    if(this != &obj)
        _type = obj._type;
    return *this;
}
std::string const &AMateria::getType() const
{
	return (_type);
}
void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use fonction" << std::endl;
}