#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &obj);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(RobotomyRequestForm &obj);

		virtual bool execute(Bureaucrat const &executor) const;
};
#endif