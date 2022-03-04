#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery", 145, 137, "")
{
	std::cout << "default constructor S is called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Shrubbery", 145, 137, target)
{
	std::cout << "default constructor S with name and grade is called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj):AForm(obj)
{
	std::cout << "copy constructor S is called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "default destructor S is called" << std::endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	if(this != &obj)
		std::cout << "you can't assign this to anthor" << std::endl; //const parameters can't be assigned
	return *this;
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream out;
	std::string const file = _target + "_ShrubberyCreationForm";
	try
	{
		AForm::execute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
	out.open(file.c_str(), std::ofstream::trunc);
	if(!out.is_open())
	{
		std::cerr << "faile to open the Shrubbery form" << std::endl;
		return false;
	} 
out << "	  _-_       " << std::endl;
out	<< "   ~~     ~~    " << std::endl;
out	<< " ~~         ~~  " << std::endl;
out	<< "{              }" << std::endl;
out	<< "  _-     -_     " << std::endl;
out	<< "  ~  || ||  ~   " << std::endl;
out	<< "_- -  | | _- _  " << std::endl;
out	<< " _ -  | |   -_  " << std::endl;
out	<< "    ||| |||      " << std::endl;
out.close();
return (true);
}