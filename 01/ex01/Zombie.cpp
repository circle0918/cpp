#include "Zombie.hpp"

void Zombie::annonce()
{
	std::cout << "I'm " << _name << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}
