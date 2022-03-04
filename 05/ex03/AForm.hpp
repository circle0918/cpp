#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class AForm{
	protected:
		std::string const _name;
        bool _signed;
		unsigned int const _sGrade;
        unsigned int const _eGrade;
		std::string _target;

	public:
		AForm();
		AForm(std::string name, unsigned int x, unsigned int y, std::string target);
		AForm(AForm const &obj);
		virtual ~AForm();

		AForm& operator=(AForm const &obj);

		std::string getName() const;
		unsigned int getsGrade() const;
        unsigned int geteGrade() const;
        bool getSigned() const;
		std::string const getTarget() const;
		void setSigned()const;

        void beSigned(Bureaucrat &obj);

		virtual bool execute(Bureaucrat const &executor) const = 0;

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

		class GradeNotSignedException: public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Form isn't signed\n");
			}
		} NSigned;
};

std::ostream &operator<<(std::ostream &output, AForm const &obj);

#endif