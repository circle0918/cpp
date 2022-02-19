#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdio>

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		FragTrap& operator=(const FragTrap &obj);
		void highFivesGuys(void);
		void attack(void);
		void setDmg();
		void setHit();
	
	/*protected:
		unsigned int _dmg;*/
};

#endif