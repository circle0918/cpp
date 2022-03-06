#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>

class Span{

	private:
		unsigned int	 _N;
		std::vector<int> _array;

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &obj);
		~Span();
		Span &operator=(const Span &obj);

		void			addNumber(unsigned int const nb);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class ErrorSpan : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Span error\n"); 
			}
		} err;

		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};

#endif