#include "../includes/MutantStack.hpp"
#include <list>

int main()
{
	typedef MutantStack<std::string> Mutant;
	Mutant m;
	m.push("Alisson");
	m.push("Dos Santos");
	m.pop();
	m.push("Peter");
	m.push("Liberal");

	std::cout << "String Iterator: ";
	for (Mutant::iterator i = m.begin(); i != m.end(); i++)
		std::cout << *i << ", ";
	
	std::cout << std::endl << std::endl << "String Stack Information \nSize: " << m.size() << "\nEmpty: " << (m.empty() ? "true" : "false") << std::endl;
	m.pop();
	m.pop();
	m.pop();
	std::cout << std::endl << std::endl << "String Stack Information \nSize: " << m.size() << "\nEmpty: " << (m.empty() ? "true" : "false") << std::endl;

	std::cout << std::endl << "-------------" << std::endl << std::endl;

	typedef MutantStack<int> MutantInt;
	MutantInt mInt;
	mInt.push(27);		
	mInt.push(12);	
	mInt.pop();	
	mInt.push(21);		
	mInt.push(11);		
	mInt.push(1);

	std::cout << "Int Iterator: ";
	for (MutantInt::iterator i = mInt.begin(); i != mInt.end(); i++)
		std::cout << *i << ", ";
	
	std::cout << std::endl << std::endl << "Int Stack Information \nSize: " << mInt.size() << "\nEmpty: " << (mInt.empty() ? "true" : "false") << std::endl << std::endl;

	mInt.pop();
	mInt.pop();
	mInt.pop();
	mInt.pop();

	std::cout << std::endl << std::endl << "Int Stack Information \nSize: " << mInt.size() << "\nEmpty: " << (mInt.empty() ? "true" : "false") << std::endl << std::endl;
	
	std::cout << std::endl << "-------------" << std::endl << std::endl;

	/* std::list<int> lista;
	lista.push_back(1);
	lista.push_back(10);
	lista.push_back(11);
	lista.push_back(13);
	lista.push_back(2);

	std::cout << "Int Iterator: ";
	for (std::list<int>::iterator i = lista.begin(); i != lista.end(); i++)
		std::cout << " " << *i;
	std::cout << std::endl << std::endl << "Int List Information \nSize: " << lista.size() << "\nEmpty: " << (lista.empty() ? "true" : "false") << std::endl << std::endl;
	lista.pop_back();
	lista.pop_back();
	lista.pop_back();
	lista.pop_back();
	lista.pop_back();

	std::cout << std::endl << std::endl << "Int List Information \nSize: " << lista.size() << "\nEmpty: " << (lista.empty() ? "true" : "false") << std::endl << std::endl;
	 */
	return 0;
}