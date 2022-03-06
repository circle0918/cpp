# include <iostream>
# include <time.h>
# include <stdlib.h>

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"


Base* generate(void)
{
	Base* b;
    /* initialize random seed: */
    srand (time(NULL));
    /* generate number between 1 and 3: */
    int num = rand() % 3 + 1;
	if (num == 1)
		b = new A;
	else if (num == 2)
		b = new B;
	else
		b = new C;
	return b;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL) // resussi dynamic_cast return non 0; sinon null;
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)&a;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)&b;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)&c;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

int		main(void)
{
	Base* b;
	b = generate();
	std::cout << "========== Indentify by Pointer ==========" << std::endl;
	identify(b);
	std::cout << "========== Identify by Reference ==========" << std::endl;
	identify(*b);
	delete b;
	return 0;
}