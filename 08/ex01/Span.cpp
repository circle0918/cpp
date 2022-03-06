#include "Span.hpp"

Span::Span():_N(0){
}

Span::Span(unsigned int N):_N(N){
}

Span::Span(Span const &obj){
	_array = obj._array;
	_N = obj._N;
}

Span::~Span(){
}

Span &Span::operator=(const Span &obj){
	if (this != &obj)
	{
		_N = obj._N;
		_array = obj._array;
	}
	return (*this);
}

void Span::addNumber(unsigned int const nb){
	if(_array.size() >= _N)
		throw err;
	else
		_array.push_back(nb);
}

unsigned int	Span::shortestSpan(void){
	std::sort(_array.begin(), _array.end());
	if(_array.size() < 2)
		throw err;
	int min_span = 0;
	bool first = true;
	for (size_t i = 0; i < _array.size() - 1; i++)
	{
		if (first || _array[i + 1] - _array[i] < min_span)
		{
			min_span = _array[i + 1] - _array[i];
			first = false;
		}
	}
	return (min_span);
}
unsigned int	Span::longestSpan(void){
	if(_array.size() < 2)
		throw err;
	std::sort(_array.begin(), _array.end());
	return(abs(_array[0] - _array[_N - 1]));
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	unsigned int maxSize = _N - _array.size();
	if ((end - begin) <= maxSize)
		_array.insert(_array.end(), begin, end); 
	else
		throw err;
}
