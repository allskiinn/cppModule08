#include "../includes/MutantStack.hpp"

int main()
{
	MutantStack<std::string> mstack_string;
	mstack_string.push("Alisson");
	mstack_string.push("Dos Santos");
	mstack_string.pop();
	mstack_string.push("Peter");
	mstack_string.push("Liberal");

	MutantStack<int> mstack;
	mstack.push(27);		
	mstack.push(12);	
	mstack.pop();	
	mstack.push(21);		
	mstack.push(11);		
	mstack.push(1);	

	std::cout << std::endl;

	MutantStack<std::string>::iterator s_it = mstack_string.begin();
	MutantStack<std::string>::iterator e_it = mstack_string.end();

	std::cout << "String Iterator: ";
	while (s_it != e_it)
	{
		std::cout << *s_it << ", ";
		++s_it;
	}

	std::cout << std::endl << std::endl << " String Stack Information \nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
	mstack_string.pop();
	mstack_string.pop();
	mstack_string.pop();
	std::cout << std::endl << std::endl << " String Stack Information \nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;

	std::cout << std::endl << "-------------------------------------------------------------------" << std::endl << std::endl;

	MutantStack<int>::iterator it_s = mstack.begin();
	MutantStack<int>::iterator it_e = mstack.end();

	std::cout << "Int Iterator: ";
	while (it_s != it_e)
	{
		std::cout << *it_s << "` ";
		++it_s;
	}

	std::cout << std::endl << std::endl << " Int Stack Information \nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl << std::endl;

	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();

	std::cout << std::endl << std::endl << " Int Stack Information \nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl << std::endl;

	return 0;
}