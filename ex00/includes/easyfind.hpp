#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>

class notFound : public std::exception {
	public: 
		virtual const char *what() const throw() {
			return("RESULT: not found");
		}
};

template <typename T>
typename T::iterator easyfind (T &items, int const n) {
	typename T::iterator search;
	search = find(items.begin(), items.end(), n);
	if (search == items.end())
		throw notFound();
	return search;
}

#endif