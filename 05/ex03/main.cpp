#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		std::cout << "=================right form========================" << std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("R", "Bender");
		delete rrf;
		std::cout << "=================wrong form========================" << std::endl;
		AForm* rrrf;
		rrrf = someRandomIntern.makeForm("RR", "Bender");
		if(rrrf)
			delete rrrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}