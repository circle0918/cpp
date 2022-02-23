#ifndef MateriaSource_HPP
#define MateriaSource_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>
#include <iostream>

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materias[4];

	public:
	MateriaSource();
	MateriaSource(MateriaSource const &obj);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &obj);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};
#endif