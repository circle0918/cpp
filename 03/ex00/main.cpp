#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	a.setName("Leo");

	
	a.attack("enemy");
	a.takeDamage(5);
	//a.takeDamage(10);
	a.beRepaired(4);

	return 0;
}