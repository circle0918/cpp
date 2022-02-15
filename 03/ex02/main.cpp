#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("A");
	std::cout << "name of a is " << a.getName() << std::endl;
	std::cout << "A's hit info: " << a.getHit() << std::endl;
	std::cout << "A's energy info: " << a.getEgy() << std::endl;
	std::cout << "A's damage info: " << a.getDmg() << std::endl;
	a.takeDamage(10);
	a.beRepaired(4);
	a.highFivesGuys();
	a.attack();
	return 0;
}