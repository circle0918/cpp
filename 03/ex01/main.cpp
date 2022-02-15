#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("A");
	ClapTrap b("B");
	std::cout << "name of a (child) is " << a.getName() << std::endl;
	std::cout << "name of b (parent) is " << b.getName() << std::endl;
	std::cout << "A's hit info: " << a.getHit() << std::endl;
	std::cout << "B's hit info: " << b.getHit() << std::endl;
	a.attack("enemy");
	a.takeDamage(10);
	a.beRepaired(4);
	a.guardGate();
	return 0;
}