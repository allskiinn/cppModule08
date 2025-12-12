#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>

class NotFound : public std::exception {
	public :
		virtual const char *what() const throw() {
			return ("not found");
		}
};

template< typename T >
typename T::iterator easyfind (T &fisrt, int i) {
	typename T::iterator element;
	element = find(fisrt.begin(), fisrt.end(), i);
	if (element == fisrt.end())
		throw NotFound();
	return (element);
}
#endif