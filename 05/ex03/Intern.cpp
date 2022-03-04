#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "default constructor is called" << std::endl;
	_func[0] = &Intern::_makeS;
	_func[1] = &Intern::_makeR;
	_func[2] = &Intern::_makeP;
}
Intern::Intern(Intern const &obj)
{
	(void) obj;
}
Intern::~Intern()
{
	std::cout << "default destructor is called" << std::endl;
}
Intern& Intern::operator=(Intern const &obj)
{
	(void) obj;
	return *this;
}
AForm *Intern::_makeS(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::_makeR(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::_makeP(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string s1, std::string s2)
{
	std::string array[3] = {"S", "R", "P"};
	for(int i = 0; i < 3; i++)
	{
		if(array[i] == s1)
			return (this->*(_func[i]))(s2);
	}
	throw erro;
}