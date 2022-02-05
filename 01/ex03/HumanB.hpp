#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
private:
	std::string _name;
	Weapon *_w;
public:
	void attack();
	void setWeapon(Weapon &w);
	HumanB(const std::string &n);
};

#endif