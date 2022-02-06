#include "Karen.hpp"
int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "arguments error" << std::endl;
	Karen kk;
	kk.complain(av[1]);
	return 0;
}