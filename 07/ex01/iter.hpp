#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <limits.h>
#include <stdlib.h>

template<typename T>
void iter(T const *array, size_t const len, void(*f)(T const &value))
{
	for(size_t i = 0; i < len; i++)
	{
		f(array[i]);
	}
	return ;
}

#endif
