#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm():AForm("President", 25, 5, "")
{
	std::cout << "default constructor R is called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("President", 25, 5, target)
{
	std::cout << "default constructor R with name and grade is called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj):AForm(obj)
{
	std::cout << "copy constructor R is called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "default destructor R is called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
	if(this != &obj)
		std::cout << "you can't assign this to anthor" << std::endl; //const parameters can't be assigned
	return *this;
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
	return true;
}