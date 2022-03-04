#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy", 72, 45, "")
{
	std::cout << "default constructor R is called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("Robotomy", 72, 45, target)
{
	std::cout << "default constructor R with name and grade is called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj):AForm(obj)
{
	std::cout << "copy constructor R is called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "default destructor R is called" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	if(this != &obj)
		std::cout << "you can't assign this to anthor" << std::endl; //const parameters can't be assigned
	return *this;
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		AForm::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
	std::cout << "Makes some drilling noises" << std::endl;
	std::srand(std::time(NULL));
	int rand = std::rand() % 2;
	if(rand)
		std::cout << _target << " has been robotomized " << std::endl;
	else
		std::cout << _target << " hasn't been robotomized " << std::endl;
	return true;
}