#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>

class Form{
	private:
		std::string const _name;
        bool _signed;
		unsigned int const _sGrade;
        unsigned int const _eGrade;

	public:
		Form();
		Form(std::string name, unsigned int x, unsigned int y);
		Form(Form const &obj);
		~Form();

		Form& operator=(Form const &obj);

		std::string getName() const;
		unsigned int getsGrade() const;
        unsigned int geteGrade() const;
        bool getSigned() const;

        void beSigned(Bureaucrat &obj);

		class GradeTooHighException: public std::exception
		{
			public:
			virtual const char* what() const throw()

			{
				return ("Grade is too high\n");
			}
		} high;

		class GradeTooLowException: public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low\n");
			}
		} low;
};

std::ostream &operator<<(std::ostream &output, Form const &obj);

#endif