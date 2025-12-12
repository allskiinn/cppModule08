#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <iterator>
#include <climits>


class Span
{
	private:
		std::vector<int> numbers;
		unsigned int size;
		unsigned int pos;

	public:
		Span(unsigned int N);
		Span(const Span &src);

		~Span();

		Span &operator=(const Span &src);

		void addNumber(int number);
		void addNumber(unsigned int numbers, time_t seed);
		unsigned int shortestSpan()const;
		unsigned int longestSpan()const;

		unsigned int getSize()const;
		unsigned int getPos()const;

	class	VectorInvalidException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ArrayFullException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ComparisonInvalidException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};


#endif