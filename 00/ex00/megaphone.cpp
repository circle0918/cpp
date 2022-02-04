#include <iostream>
#include <string>
//#include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		int i = 1;
		while(i < ac)
		{
			int j = 0;
			while(av[i][j] != '\0')
			{
				av[i][j] = toupper(av[i][j]);
				std :: cout << av[i][j];
				j++;
			}
			
			i++;
			if (i != ac)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}
