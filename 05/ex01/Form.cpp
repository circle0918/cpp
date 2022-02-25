#include "Form.hpp"

Form::Form():_name(""),_sGrade(100),_eGrade(100),_signed(false)
{
	std::cout << "default constructor is called" << std::endl;
}

Form::Form(std::string name, unsigned int x, unsigned int y):_name(name),_sGrade(x),_eGrade(y),_signed(false)
{
	std::cout << "default constructor with name and grade is called" << std::endl;
	if(_sGrade > 150 || _eGrade > 150)
	{
		throw low;
	}
	if(_sGrade < 1 || _eGrade < 1)
	{
		throw high;
	}
}

Form::Form(Form const &obj):_signed(obj._signed),_name(obj._name),_sGrade(obj._sGrade),_eGrade(obj._eGrade)
{
	std::cout << "copy assignment is called" << std::endl;
	*this = obj;
}

Form::~Form()
{
	std::cout << "default destructor is called" << std::endl;
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
        throw low;
    else
        _signed = true;
    return;
}

std::ostream &operator<<(std::ostream &output, Form const &obj)
{
	output << obj.getName() << " : " << "execute grade is : " << obj.geteGrade() << "and sign grade is " << obj.getsGrade() << " and his statut is " << obj.getSigned() << std::endl;
	return output;
}
