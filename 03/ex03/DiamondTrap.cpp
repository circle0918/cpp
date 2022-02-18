#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap()
{
	std::cout << "default constructor Diamond is called" << std::endl;
	this->name = "";
	this->_egy = ScavTrap::_egy;
	this->_hit = FragTrap::_hit;
	this->_dmg = FragTrap::_dmg;
	ScavTrap::_dmg = FragTrap::_dmg;

}

DiamondTrap::DiamondTrap(std::string str):ClapTrap(str)
{
	std::cout << "default constructor Diamond with his name is called" << std::endl;
	this->name = str;
	this->_name = str + "_clap_name";
	this->_hit = FragTrap::_hit;
	this->_egy = ScavTrap::_egy;
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
