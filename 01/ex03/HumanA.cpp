#include "HumanA.hpp"

HumanA::HumanA(const std::string &n, Weapon &w): _name(n), _w(w)
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _w.getType() << std::endl;
}