#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>

class Bureaucrat{
	private:
		std::string const _name;
		unsigned int _grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat const &obj);

		std::string getName() const;
		unsigned int getGrade() const;
		void increaseGrade();
		void decreaseGrade();

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

std::ostream &operator<<(std::ostream &output, Bureaucrat const &obj);

#endif