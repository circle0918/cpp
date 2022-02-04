#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
private :
	std::string _name;

public :
	void annonce();

	Zombie();
	Zombie(std::string name);
	~Zombie();
		
};


#endif
