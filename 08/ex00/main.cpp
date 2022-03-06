#include "easyfind.hpp"
#include <vector>

int main()
{
	std::cout << "===============vector with int========================\n";
	int tab[] = {16, 2, 77, 29};
	std::vector<int> vec0 (tab, tab + sizeof(tab) / sizeof(int) );
	try
	{
		std::vector<int>::const_iterator i  = easyfind(vec0, 1);
		std::cout << "found : " << *i << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::const_iterator i  = easyfind(vec0, 2);
		std::cout << "found : " << *i << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===============vector with float========================\n";
	std::vector<float> tab1;
	tab1.push_back(42.5f);
	tab1.push_back(52.0f);
	try
	{
		std::vector<float>::const_iterator j  = easyfind(tab1, 1);
		std::cout << "found : " << *j << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<float>::const_iterator i  = easyfind(tab1, 42.5f);
		std::cout << "found : " << *i << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<float>::const_iterator i  = easyfind(tab1, 52);
		std::cout << "found : " << *i << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}