#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &obj);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(PresidentialPardonForm &obj);

		virtual bool execute(Bureaucrat const &executor) const;
};
#endif