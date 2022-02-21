#ifndef ICE_HPP
#define ICE_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &obj);
		~Ice();
		Ice &operator=(Ice const &obj);
		AMateria* clone() const;
		void use(ICharacter &obj);

};

#endif