#include "../includes/easyfind.hpp"
#include <list>
#include <vector>

int	main()
{
	{
		try
		{
			typedef std::list<int> t_list;
			t_list list;
			for (int i = 0; i < 20; i++)
				list.push_back(i + 1);
			std::cout << "--- Testing using list containers  ---" << std::endl;
			std::cout << "\n--- Show list  ---" << std::endl;
			std::cout << "[";
			for (t_list::iterator i = list.begin(); i != list.end(); i++)
				std::cout << " " << *i;
			std::cout << "]" << std::endl;
			t_list::const_iterator find = list.end();
			find = easyfind(list, 20);
			if (find != list.end())
				std::cout << "LIST RESULT: [ " << *find << " ] - " << "Found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			typedef std::vector<int> t_vector;
			t_vector vector;
			for (int i = 0; i < 10; i++)
				vector.push_back(i + 1);
			std::cout << "\n--- Testing using vector containers  ---" << std::endl;
			std::cout << "\n--- Show vector  ---" << std::endl;
			std::cout << "[";
			for (t_vector::iterator i = vector.begin(); i != vector.end(); i++)
				std::cout << " " << *i;
			std::cout << "]" << std::endl;
			t_vector::const_iterator find = vector.end();
			find = easyfind(vector, 9);
			if (find != vector.end())
				std::cout << "VECTOR RESULT: [ " << *find << " ] - " << "Found" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
