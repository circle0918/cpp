#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <cstdio>

class ClapTrap{
	protected:
		std::string _name;
		unsigned int _hit;
		unsigned int _egy;
		unsigned int _dmg;
	
	public :
		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& obj);

		std::string getName();
		unsigned int getHit();
		unsigned int getEgy();
		unsigned int getDmg();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif