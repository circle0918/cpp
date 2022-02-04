#include "Contact.hpp"

bool Contact::is_contact_valid()
{
	return (first_name.empty() || last_name.empty() || nickname.empty()
				||phone_num.empty() || darkest_secret.empty());
}
void Contact::init()
{
		std::cout << "please enter the first name :" << std::endl;
		std::getline(std::cin, first_name);
		std::cout << "please enter the last name :" << std::endl;
		std::getline(std::cin, last_name);
		std::cout << "please enter the nickname :" << std::endl;
		std::getline(std::cin, nickname);
		std::cout << "please enter the phone number :" << std::endl;
		std::getline(std::cin, phone_num);
		std::cout << "please enter his/her darkest secret :" << std::endl;
		std::getline(std::cin, darkest_secret);
		return;
}
void Contact::print()
{
	std::string fn = first_name.length() > 9 ? first_name.substr(0, 9) + "." : first_name; 
	std::string ln = last_name.length() > 9 ? last_name.substr(0, 9) + "." : last_name; 
	std::string nn = nickname.length() > 9 ? nickname.substr(0, 9) + "." : nickname; 
	std::cout << std::setw(10) << fn << "|" ;	
	std::cout << std::setw(10) << ln << "|" ;	
	std::cout << std::setw(10) << nn << "|" ;	

	//std::cout << "|" << std::setw(10) << count; 
}
void Contact::print_infos()
{
	std::cout << "first_name : " << first_name << std::endl;
	std::cout << "last_name : " << last_name << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone_number : " << phone_num << std::endl;
	std::cout << "darkest secret : " << darkest_secret << std::endl;
}

