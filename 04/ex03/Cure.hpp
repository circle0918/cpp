#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &obj);
		~Cure();
		Cure &operator=(Cure const &obj);
		AMateria* clone() const;
		void use(ICharacter &obj);

};

#endif