#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <ctime>


class Span
{
	private:
		std::vector<int> items;
		unsigned int N;
		unsigned int pos;
	public:
		Span(unsigned int size);
		Span( const Span &other);
		Span &operator=(const Span& other);
		~Span();

		void addNumber(int number);
		void addNumber(std::vector<int> list);
		unsigned int getN() const;
		unsigned int getPos() const;
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void allItems();

	class VectorInvalid : public std::exception {
		public:
			virtual const char* what() const throw(); 
	};

	class	VectorFull: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	ComparisonInvalid: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};


#endif