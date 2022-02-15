#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <cstdio>

class ClapTrap{
	private:
		std::string _name;
		unsigned int _hit;
		unsigned int _egy;
		unsigned int _dmg;
	
	public :
		ClapTrap();
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& obj);

		void setName(const std::string& str);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif