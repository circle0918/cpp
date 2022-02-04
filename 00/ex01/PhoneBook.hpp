#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact cs[8];
	int count;
public:
	PhoneBook();
//	~PhoneBook();
	void add();
	void search();
	void exit();
};

#endif

