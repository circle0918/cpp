#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdio>

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		FragTrap& operator=(const FragTrap &obj);
		void highFivesGuys(void);
		void attack(void);
};

#endif