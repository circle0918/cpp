#include "Span.hpp"

int main()
{
	std::cout <<"=========only one value return error===========" << std::endl;
	try
	{
		Span A(1);
		A.addNumber(3);
		std::cout << A.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout <<"=========span is full can't add error==========" << std::endl;
	try
	{
		Span A(2);
		A.addNumber(1);
		A.addNumber(5);
		A.addNumber(10);
		std::cout << A.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout <<"=========span is empty nothing to campare==========" << std::endl;
	try
	{
		Span A(0);
		std::cout << A.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<"=========find longest distance=====================" << std::endl;
	try
	{
		Span A(3);
		A.addNumber(3);
		A.addNumber(1);
		A.addNumber(6);
		std::cout << A.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<"=========find shortest distance=====================" << std::endl;
	try
	{
		Span A(3);
		A.addNumber(-3);
		A.addNumber(1);
		A.addNumber(6);
		std::cout << A.shortestSpan() << std::endl;
	//	std::cout << A.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<"=========test 10 000 nombres without addNum function==========" << std::endl;
		try
	{
		Span A(10000);
		std::vector<int> toAdd(10000, 42);
		A.addRange(toAdd.begin(), toAdd.end());

		std::cout << A.shortestSpan() << std::endl;
		std::cout << A.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}