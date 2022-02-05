#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &n): _name(n), _w(NULL)
{
}

void HumanB::attack()
{
	if(_w)
		std::cout << _name << " attacks with their " << _w->getType() << std::endl;
	else
		std::cout <<_name << " attacks without their weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	_w = &w;
	std::cout << _name << " setweapon attacks with their " << _w->getType() << std::endl;
}