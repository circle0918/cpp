#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string name)
{
	_type = name;
}