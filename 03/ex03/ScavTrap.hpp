#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdio>

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap &obj);

		void guardGate();
		void attack(const std::string &target);
		void setEgy();
};

#endif