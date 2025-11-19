#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>

class NotFound : public std::exception {
	public :
		virtual const char *what() const throw() {
			return ("not found");
		}
};

template< typename T >
typename T::iterator easyfind (T &fisrt, int i);
#include "easyfind.tpp"

#endif