#include "AForm.hpp"

AForm::AForm():_name(""), _signed(false), _sGrade(100), _eGrade(100), _target("")
{
	std::cout << "default constructor F is called" << std::endl;
}

AForm::AForm(std::string name, unsigned int x, unsigned int y, std::string target):_name(name), _signed(false), _sGrade(x), _eGrade(y), _target(target)
{
	std::cout << "default constructor F with name and grade is called" << std::endl;
	if(_sGrade > 150 || _eGrade > 150)
	{
		throw low;
	}
	if(_sGrade < 1 || _eGrade < 1)
	{
		throw high;
	}
}

AForm::AForm(AForm const &obj):_name(obj._name), _signed(obj._signed), _sGrade(obj._sGrade), _eGrade(obj._eGrade), _target(obj._target)
{
	std::cout << "copy assignment F is called" << std::endl;
	*this = obj;
}

AForm::~AForm()
{
	std::cout << "default destructor F is called" << std::endl;
}

AForm& AForm::operator=(AForm const &obj)
{
	if(this != &obj)
		std::cout << "you can't assign this to anthor" << std::endl; //const parameters can't be assigned
	return *this;
}

std::string AForm::getName() const
{
	return _name;
}

unsigned int AForm::getsGrade() const
{
	return _sGrade;
}

unsigned int AForm::geteGrade() const
{
	return _eGrade;
}

bool AForm::getSigned() const
{
	return _signed;
}

std::string const AForm::getTarget() const
{
	return _target;
}

void AForm::beSigned(Bureaucrat &obj)
{
//	_signed = false;
    if(obj.getGrade() > getsGrade())
	{
		obj.signForm(*this);
	}
    else
	{
        _signed = true;
		obj.signForm(*this);
	}
    return;
}

bool AForm::execute(Bureaucrat const &executor) const
{
	if(_signed == false)
	{
		throw AForm::GradeNotSignedException();
		return false;
	}
	if(executor.getGrade() > _eGrade)
	{
		throw AForm::GradeTooLowException();
		return false;
	}
	return true;
}

std::ostream &operator<<(std::ostream &output, AForm const &obj)
{
	output << obj.getName() << " : " << "execute grade is : " << obj.geteGrade() << ", sign grade is " << obj.getsGrade() << " and his statut is " << obj.getSigned() << std::endl;
	return output;
}
