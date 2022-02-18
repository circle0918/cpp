#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "default constructor Diamond is called" << std::endl;
	this->name = "";
	_hit = FragTrap::_hit;
	this->_egy = ScavTrap::_egy;
	this->_dmg = FragTrap::_dmg;
	ScavTrap::_dmg = FragTrap::_dmg;
	std::cout << "d0 : " << FragTrap::_dmg << std::endl;

}

DiamondTrap::DiamondTrap(std::string str)
{
	std::cout << "default constructor Diamond with his name is called" << std::endl;
	this->name = str;
	this->_name = str + "_clap_name";
	this->_hit = FragTrap::_hit;
	// std::cout << FragTrap::_hit << std::endl;
	// std::cout << ScavTrap::_hit << std::endl;
	// std::cout << ClapTrap::_hit << "Clap" << std::endl;
	// std::cout << this->_hit << std::endl;
	this->_egy = ScavTrap::_egy;
	std::cout << "d1 : " << FragTrap::_dmg << std::endl;
	this->_dmg = FragTrap::_dmg;
	ScavTrap::_dmg = FragTrap::_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "default copy cons Diamond is called" << std::endl;
	this->name = obj.name;
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_egy = obj._egy;
	this->_dmg = obj._dmg;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "default destructor Diamond is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	this->name = obj.name;
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_egy = obj._egy;
	this->_dmg = obj._dmg;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "my name is " << name << std::endl;
	std::cout << "my parent name is " << _name << std::endl;
}

unsigned int DiamondTrap::getDmg()
{
	return (this->_dmg);
}


