#include "Sed.hpp"
int main(int ac, char **av)
{
	if (ac != 4 || std::string(av[2]).empty() || std::string(av[3]).empty())
		std::cout << "error arguments" << std::endl;
	else
	{
		Sed sed;
		if(sed.read(av[1]) == false)
		{
			std::cout << "open file error" << std::endl;
			return 1;
		}
		sed.replace(av[2], av[3]);
	}
	return 0;
}
