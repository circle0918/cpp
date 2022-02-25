#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat A("leo", 150);
	std::cout << A;
	try{
		A.increaseGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	try{
		A.decreaseGrade();
		A.decreaseGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	try{
		Bureaucrat B("matheo", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	
	return 0;
}