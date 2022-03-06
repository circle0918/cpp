#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	
		MutantStack() : std::stack<T>() {}
		~MutantStack() {}
		MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}
		MutantStack<T>& operator=(const MutantStack<T>& obj){
			std::stack<T>::operator=(obj);
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
};

#endif