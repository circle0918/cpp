#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default Brain constructor is called" << std::endl;
}
Brain::Brain(const Brain &obj)
{
    *this = obj;
}
Brain::~Brain()
{
    std::cout << "default Brain destructor is called" << std::endl;
}
Brain& Brain::operator=(const Brain &obj)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = obj._ideas[i];
    return *this;
}

void Brain::setIdeas(unsigned int i, std::string str)
{
    _ideas[i] = str;
}

std::string Brain::getIdeas(unsigned int i) const
{
    return (_ideas[i]);
}

void Brain::printIdeas(unsigned int i) const
{
    std::cout << _ideas[i] << std::endl;
}