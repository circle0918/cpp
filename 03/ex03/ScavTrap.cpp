#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "default constructor Scav is called" << std::endl;
	this->_hit = 100;
	this->_egy = 50;
	this->_dmg = 20;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "default constructor Scav with his name is called" << std::endl;
	this->_name = str;
	this->_hit = 100;
	this->_egy = 50;
	this->_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "default copy cons Scav is called" << std::endl;
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_egy = obj._egy;
	this->_dmg = obj._dmg;
}

ScavTrap::~ScavTrap()
{
	std::cout << "default destructor Scav is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_egy = obj._egy;
	this->_dmg = obj._dmg;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_egy)
	{
		std::cout << _name << " attacks " << target << std::endl;
		_egy--;
	}
}

void ScavTrap::setEgy()
{
	this->_egy = 50;
}