#include "PhoneBook.hpp"
//#include "Contact.hp"

PhoneBook::PhoneBook()
{
	this->count = 0;
}
void PhoneBook::add()
{
	int index = count >= 8 ? count % 8 : count;
	cs[index].init();
	if(cs[index].is_contact_valid())
		std::cout << "contact can’t have empty fields."<< std::endl;
	else
	{
		std::cout << "add " << index + 1 << " contact finish"<< std::endl;
		count++;
	}
}
void PhoneBook::search()
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	int max = count >= 8 ? 8 : count;
	for (int i = 0; i < max; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|" ;	
		cs[i].print();
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;
	while(1)
	{
		std::cout << "Enter Index to display Informations" << std::endl;
		int x;
		std::cin >> x;
		if(std::cin.fail() || x < 1 || x > count)
		{
			std::cin.clear();
			std::cin.ignore(256,'\n');
		    std::cout << "error input index" << std::endl;
			continue;
		}
		else
		{
			cs[x - 1].print_infos();
			std::cin.clear();
			std::cin.ignore(256,'\n');
			break;
		}
	}
}
void PhoneBook::exit()
{
	std::cout << "goodbye" << std::endl;
}
int main(void)
{
	PhoneBook pb;
	while(1)
	{
		std::cout << "please type ADD/SEARCH/EXIT" << std::endl;
		std::string comd;
		std::getline(std::cin, comd);
		if(comd == "ADD")
			pb.add();
		else if (comd == "SEARCH")
			pb.search();
		else if (comd == "EXIT")
		{
			pb.exit();
			break;
		}
		else
			std::cout << "wrong input!" << std::endl;
		
	}
	return 0;
}
