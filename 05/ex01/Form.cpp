#include "Form.hpp"

Form::Form():_name(""), _signed(false), _sGrade(100), _eGrade(100)
{
	std::cout << "default constructor F is called" << std::endl;
}

Form::Form(std::string name, unsigned int x, unsigned int y):_name(name), _signed(false), _sGrade(x), _eGrade(y)
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

Form::Form(Form const &obj):_name(obj._name), _signed(obj._signed), _sGrade(obj._sGrade), _eGrade(obj._eGrade)
{
	std::cout << "copy assignment F is called" << std::endl;
	*this = obj;
}

Form::~Form()
{
	std::cout << "default destructor F is called" << std::endl;
}

Form& Form::operator=(Form const &obj)
{
	//_name = obj._name; name can't be initial because of the const value
	_signed = obj.getSigned();
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

unsigned int Form::getsGrade() const
{
	return _sGrade;
}

unsigned int Form::geteGrade() const
{
	return _eGrade;
}

bool Form::getSigned() const
{
	return _signed;
}

void Form::beSigned(Bureaucrat &obj)
{
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

std::ostream &operator<<(std::ostream &output, Form const &obj)
{
	output << obj.getName() << " : " << "execute grade is : " << obj.geteGrade() << ", sign grade is " << obj.getsGrade() << " and his statut is " << obj.getSigned() << std::endl;
	return output;
}
