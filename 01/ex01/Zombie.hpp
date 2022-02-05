#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
private:
	std::string _name;
//	Zombie** _ptr;

public:
	void annonce();

	Zombie();
	Zombie(std::string name);
/*	Zombie(std::string name, Zombie** ptr){
		_name = name;
		_ptr = ptr;
	}
	Zombie** getPtr(){ return _ptr; };*/
	~Zombie();
};

#endif
