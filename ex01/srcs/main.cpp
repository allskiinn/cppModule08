#include "../includes/Span.hpp"

int main()
{
	/* {
		Span a = Span(5);
		try
		{
			a.addNumber(6);
			a.addNumber(3);
			a.addNumber(17);
			a.addNumber(9);
			a.addNumber(11);
			//a.allItems();
			std::cout << "shortest span is " << a.shortestSpan() << std::endl;
			std::cout << "longest span is " << a.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}	 */
	std::cout << std::endl << "---------------------------------------------------------------" << std::endl << std::endl;
	{
		std::srand(std::time(NULL));
		std::vector<int> numbers;
		for (int i = 0; i < 10000; i++)
			numbers.push_back(std::rand());
		Span a = Span(10000);
		a.addNumber(numbers);
		std::cout << "shortest span is " << a.shortestSpan() << std::endl;
		std::cout << "longest span is " << a.longestSpan() << std::endl << std::endl;
	}
	return (0);
}