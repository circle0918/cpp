#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <cstdio>

class DiamondTrap: public FragTrap, public ScavTrap{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string str);
		DiamondTrap(const DiamondTrap &obj);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &obj);

		void attack(const std::string &target);
		void whoAmI();
};

#endif