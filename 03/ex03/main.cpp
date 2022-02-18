#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("A");
	std::cout << "name of a is " << a.getName() << std::endl;
	std::cout << "A's hit info: " << a.getHit() << std::endl;
	std::cout << "A's energy info: " << a.getEgy() << std::endl;
	std::cout << "A's damage info: " << a.getDmg() << std::endl;
	a.takeDamage(10);
	a.beRepaired(4);
	a.attack("target");
	a.whoAmI();
	return 0;
}