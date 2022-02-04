#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
class Contact{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string darkest_secret;

public:
	void init();
	void print();
	void print_infos();
	bool is_contact_valid();
};

#endif

