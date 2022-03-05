#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array():_array(NULL),_size(0){}
		Array(unsigned int n):_array(new T[n]),_size(n){}
		Array(Array const &obj):_array(NULL),_size(0){ *this = obj;}
		~Array(){
			if(_array != NULL)
				delete [] _array;
		}

		Array &operator=(Array const &obj){
			if(this != &obj)
			{
				delete [] _array;
				_size = obj._size;
				_array = new T[_size];
				for(unsigned int i = 0; i < _size; i++)
					_array[i] = obj._array[i];
			}
			return *this;
		}

		class	SegFaultError : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("SegFault possible");
				};
		} SegF;

		T &operator[](unsigned int i) const
		{
			if(i >= _size)
				throw SegF;
			else
				return _array[i];
		}

		unsigned int size() const { return (_size); }

};

#endif