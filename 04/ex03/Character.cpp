#include "Character.hpp"

Character::Character():_name("")
{
	std::cout << "default Character constructor is called" << std::endl;
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name):_name(name)
{
	std::cout << "Character constructor with name is called" << std::endl;
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & obj)
{
	std::cout << "Character copy constructor is called" << std::endl;
	*this = obj;
}
Character::~Character()
{
	std::cout << "default Character destructor is called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(_inventory[i] != NULL)
			delete _inventory[i];
	}
}
Character &Character::operator=(const Character &obj)
{
	std::cout << "Character assig constructor is called" << std::endl;

	for(int i = 0; i < 4; i++)
	{
		if(_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	_name = obj._name;
	for(int i = 0; i < 4; i++)
	{
		if(obj._inventory[i] != NULL)
			_inventory[i] = obj._inventory[i]->clone();
	}
	return *this;
}
std::string const &Character::getName() const
{
	return (_name);
}
void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "invalid AMateria" << std::endl;
		return;
	}
	for(int i = 0; i < 4; i++)
	{
		if(_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "inventory[" << i << "] is equiped with "<< m->getType() << std::endl;
			return;
		}
	}
	std::cout << "the inventory is full, could not add anything" << std::endl;
}
void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		_inventory[idx] = NULL; 
		std::cout << _inventory[idx]->getType() << " is rejected" << std::endl;
		return;
	}
	else
	{
		std::cout << "nothing to reject" << std::endl;
		return;
	}
	
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
	{
		std::cout << "nothing to use" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
	return;
}
