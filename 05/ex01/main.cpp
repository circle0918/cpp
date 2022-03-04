#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat A("leo", 0);
		Form F("form_1", 150, 60);
		F.beSigned(A);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "===============================================" << std::endl;
	try{
		Bureaucrat A("leo", 151);
		Form F("form_1", 150, 60);
		F.beSigned(A);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "===============================================" << std::endl;
	try{
		Bureaucrat A("leo", 150);
		Form F("form_1", 150, 60);
		F.beSigned(A);
		std::cout << F;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "===============================================" << std::endl;
	Bureaucrat A("leo", 101);
	Form F("form_1", 100, 60);
	try{
	
		A.decreaseGrade();
		F.beSigned(A);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << F;
	std::cout << "===============================================" << std::endl;



	return 0;
}
