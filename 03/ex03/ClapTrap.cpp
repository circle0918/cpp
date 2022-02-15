#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name(""),_hit(10),_egy(10),_dmg(0)
{
	std::cout << "default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "default constructor with name is called" << std::endl;
	_name = str;
	_hit = 10;
	_egy = 10;
	_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "copy assignment is called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "default Destructeur is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	_name = obj._name;
	_hit = obj._hit;
	_egy = obj._egy;
	_dmg = obj._dmg;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(_egy)
	{
		std::cout << _name << " attacks " << target << " causing " << _dmg << " points of damage!" << std::endl;
		_egy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_egy)
	{
		std::cout << _name << " losts " << amount << " points of hit" << std::endl;
		if(amount >= _hit)
		{
			std::cout << _name << " is dead!" << std::endl;
			this->~ClapTrap();
			return;
		}
		_hit -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_egy)
	{
		std::cout << _name << " is reparing and gets " << amount << " points" << std::endl;
		_hit += amount;
		_egy--;
	}
}

std::string ClapTrap::getName()
{
	return (_name);
}

unsigned int ClapTrap::getHit()
{
	return (_hit);
}

unsigned int ClapTrap::getEgy()
{
	return (_egy);
}

unsigned int ClapTrap::getDmg()
{
	return (_dmg);
}
