#include "Array.hpp"
int	main()
{
	std::cout << "====================empty array================" << std::endl;
	Array<int>empTy(0);
	std::cout << "====================int========================" << std::endl;
	{
		Array<int>array(5);
		Array<int>copy(array);

		try {
			for (unsigned int i = 0; i < array.size(); i++)
				array[i] = i;

			for (unsigned int i = 0; i < copy.size(); i++)
				copy[i] = i * 2;

			for (unsigned int i = 0; i < array.size(); i++)
				std::cout << array[i] << " ";

			std::cout << std::endl;

			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";

			std::cout << std::endl;

			std::cout << array[6] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	
	std::cout << "====================str========================" << std::endl;
	{
		Array<std::string>array(3);

		try {
			array[0] = "I'm";
			array[1] = "hero";
			array[2] = "!!";

			for (unsigned int i = 0; i < array.size(); i++) {
				std::cout << array[i] << " ";
			}
			std::cout << std::endl;

			std::cout << array[12] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return (0);
}