#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern{
	private:
		AForm* (Intern::*_func[3])(std::string target);
		AForm* _makeS(std::string target);
		AForm* _makeR(std::string target);
		AForm* _makeP(std::string target);

	public:
		Intern();
		Intern(Intern const &obj);
		~Intern();

		Intern& operator=(Intern const &obj);

		AForm *makeForm(std::string form, std::string target);

		class erro : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Wrong form name\n");
			}
		} erro;
};

#endif