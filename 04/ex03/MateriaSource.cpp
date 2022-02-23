#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "default MateriaSource constructor is called" << std::endl;
	for(int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & obj)
{
	std::cout << "MateriaSource copy constructor is called" << std::endl;
	*this = obj;
}
MateriaSource::~MateriaSource()
{
	std::cout << "default MateriaSource destructor is called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(_materias[i] != NULL)
			delete _materias[i];
	}
}
MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "MateriaSource assig constructor is called" << std::endl;

	for(int i = 0; i < 4; i++)
	{
		if(_materias[i] != NULL)
		{
			delete _materias[i];
			_materias[i] = NULL;
		}
	}
	for(int i = 0; i < 4; i++)
	{
		if(obj._materias[i] != NULL)
			_materias[i] = obj._materias[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "invalid AMateria" << std::endl;
	}
	for(int i = 0; i < 4; i++)
	{
		if(_materias[i] == NULL)
		{
			_materias[i] = m;
			std::cout << "materias[" << i << "] is learned "<< m->getType() << std::endl;
			return;
		}
	}
	std::cout << "the materias is full, could not be learned" << std::endl;

}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(_materias[i] != NULL && _materias[i]->getType() == type)
		{
			std::cout << _materias[i]->getType() << " is created" << std::endl;
			return (_materias[i]->clone());
		}
	}
	return (NULL);
}
