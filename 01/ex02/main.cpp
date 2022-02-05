#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	//print adress of the string variable :
	std::cout << "adress of the string variable is :" << &str << std::endl;
	//print adress held by stringPTR :
	std::cout << "adress held by stringPTR is :" << stringPTR << std::endl;
	//print adress held by stringREF :
	std::cout << "adress held by stringPTR is :" << &stringREF << std::endl;
	//print value of the string:
	std::cout << "value of the string is :" << str << std::endl;	
	// print value pointed to by stringPTR:
	std::cout << "value of the string pointed to by stringPTR is :" << *stringPTR << std::endl;
	//print value pointed by stringREF :
	std::cout << "value of the string pointed to by stringREF is :" << stringREF << std::endl;
	
	return 0;
}