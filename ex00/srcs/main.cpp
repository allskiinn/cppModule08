#include "../includes/easyfind.hpp"
#include <list>

int	main()
{
	{
		try
		{
			std::list<int> test;
			for (size_t i = 0; i < 10; i++)
				test.push_back(i + 1);
			std::cout << " NUMBERS: [ ";
			for (std::list<int>::iterator i = test.begin(); i != test.end(); ++i)
				std::cout << *i << " ";
			std::cout << "]" << std::endl;

			std::list<int>::const_iterator find = test.end();
			find = easyfind(test, 10);
			if (find != test.end())
				std::cout << " [ " << *find << " ] - " << "Found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << " Number " << e.what() << '\n';
		}
	}
	return (0);
}
