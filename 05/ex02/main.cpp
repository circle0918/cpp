#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "========ShrubberyCreationForm===================" << std::endl;
	std::cout << "========Bureaucrat sgrade = 0===================" << std::endl;
	 try{
	 	Bureaucrat A("leo", 0);
		AForm *F = new ShrubberyCreationForm("tree");
		A.signForm(*F);
		A.executeForm(*F);
		delete F;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "========Bureaucrat sgrade = 160=================" << std::endl;
	 try{
	 	Bureaucrat A("leo", 160);
		AForm *F = new ShrubberyCreationForm("tree");
		A.signForm(*F);
		A.executeForm(*F);
		delete F;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "========Bureaucrat sgrade = 140=================" << std::endl;
	Bureaucrat A("leo", 140);
	AForm *F = new ShrubberyCreationForm("tree");
	try{
		F->beSigned(A);
		A.executeForm(*F);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	delete F;
	std::cout << "========Bureaucrat sgrade = 80=================" << std::endl;
	Bureaucrat B("leo", 80);
	AForm *F1 = new ShrubberyCreationForm("tree");
	try{
		F1->beSigned(A);
		B.executeForm(*F1);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	F1->execute(B);
	delete F1;
	std::cout << "========RobotomyRequestForm===================" << std::endl;
	std::cout << "========Bureaucrat sgrade = 60=================" << std::endl;
	Bureaucrat AA("leo", 60);
	AForm *FF = new RobotomyRequestForm("robot");
	try{
		FF->beSigned(AA);
		AA.executeForm(*FF);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	delete FF;
	std::cout << "========Bureaucrat sgrade = 40=================" << std::endl;
	Bureaucrat BB("leo", 40);
	AForm *FF1 = new RobotomyRequestForm("robot");
	try{
		FF1->beSigned(BB);
		BB.executeForm(*FF1);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	FF1->execute(BB);
	delete FF1;
	std::cout << "========PresidentialPardonForm===================" << std::endl;
	std::cout << "========Bureaucrat sgrade = 20=================" << std::endl;
	Bureaucrat AAA("leo", 20);
	AForm *FFF = new PresidentialPardonForm("president");
	try{
		FFF->beSigned(AAA);
		AAA.executeForm(*FFF);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	delete FFF;
	std::cout << "========Bureaucrat sgrade = 4=================" << std::endl;
	Bureaucrat BBB("leo", 4);
	AForm *FFF1 = new PresidentialPardonForm("president");
	try{
		FFF1->beSigned(BBB);
		BBB.executeForm(*FFF1);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	FFF1->execute(BBB);
	delete FFF1;


	return 0;
}