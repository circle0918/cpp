#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name(""),_grade((rand()% 150) + 1)
{
	std::cout << "default constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade):_name(name),_grade(grade)
{
	std::cout << "default constructor with name and grade is called" << std::endl;
	if(grade > 150)
	{
		std::cout << name << ": " ;
		throw low;
	}
	if(grade < 1)
	{
		std::cout << name << ": " ;
		throw high;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	std::cout << "copy assignment is called" << std::endl;
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "default destructor is called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &obj)
{
	//_name = obj._name; name can't be initial because of the const value
	_grade = obj.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increaseGrade()
{
	if(_grade <= 1)
	{
		std::cout << _name << ": " ;
		throw high;
	}
	_grade--;
	return;
}

void Bureaucrat::decreaseGrade()
{
	if(_grade >= 150)
	{
		std::cout << _name << ": " ;
		throw low;
	}
	_grade++;
	return;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return output;
}
