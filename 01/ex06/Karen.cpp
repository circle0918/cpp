#include "Karen.hpp"

Karen::Karen(void)
{
	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;
	array[0] = "DEBUG";
	array[1] = "INFO";
	array[2] = "WARNING";
	array[3] = "ERROR";
}

Karen::~Karen(void)
{
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	std::cout << "\n";
}

void Karen::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << "\n";
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\n";
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << "\n";
}

void Karen::complain( std::string level )
{
	if (level != array[0] && level != array[1] && level != array[2] && level != array[3])
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ; 
	}
	switch(level[0])
	{
		case 'D':
			(this->*f[0])();
			(this->*f[1])();
			(this->*f[2])();
			(this->*f[3])();
			break;
		case 'I':
			(this->*f[1])();
			(this->*f[2])();
			(this->*f[3])();
			break;
		case 'W':
			(this->*f[2])();
			(this->*f[3])();
			break;
		case 'E':
			(this->*f[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
