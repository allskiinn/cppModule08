#include "easyfind.hpp"

template < typename T>
typename T::iterator easyfind (T &fisrt, int i) {
	typename T::iterator element;
	element = find(fisrt.begin(), fisrt.end(), i);
	if (element == fisrt.end())
		throw NotFound();
	return (element);
}