#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>

template<typename T>
typename T::const_iterator easyfind(T const &container, int toFind)
{
	typename T::const_iterator f = std::find(container.begin(), container.end(), toFind);
	if(f == container.end())
		throw std::invalid_argument("not found\n");
	return(f);
}

#endif