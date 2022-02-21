#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain{
        private:
        std::string _ideas[100];

	public:
        Brain();
        Brain(const Brain &obj);
        ~Brain();
        Brain& operator=(const Brain &obj);

        void setIdeas(unsigned int i, std::string str);
        std::string getIdeas(unsigned int i) const;
        void printIdeas(unsigned int i) const;
};
#endif