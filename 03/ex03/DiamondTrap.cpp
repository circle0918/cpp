#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "default constructor Frag is called" << std::endl;
	_hit = 100;
	_egy = 100;
	_dmg = 30;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "default constructor Frag with his name is called" << std::endl;
	_name = str;
	_hit = 100;
	_egy = 100;
	_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "default copy cons Frag is called" << std::endl;
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_egy = obj._egy;
	this->_dmg = obj._dmg;
}

FragTrap::~FragTrap()
{
	std::cout << "default destructor Frag is called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	this->_name = obj._name;
	this->_hit = obj._hit;
	this->_egy = obj._egy;
	this->_dmg = obj._dmg;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " has high Fives competence" << std::endl;
}

void FragTrap::attack(void)
{
	std::cout << "Frag " << _name << " is attacking" << std::endl;
}
