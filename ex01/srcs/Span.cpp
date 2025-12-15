#include "../includes/Span.hpp"

Span::Span(unsigned int size): N(size), pos(0)
{
	std::cout << "Span Constructor for size of " << N << " called" << std::endl;
	this->items.reserve(this->getN());
}

Span::Span(const Span &src): N(src.getN()), pos(src.getPos())
{
	std::cout << "Span Copy Constructor called" << std::endl;
	*this = src;
}

Span::~Span()
{
	std::cout << "Span Deconstructor called" << std::endl;
}


Span	&Span::operator=(const Span &src)
{
	std::cout << "Span Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	return *this;
}

void	Span::addNumber(int number)
{
	if ((this->pos != 0 && this->items.empty() == true) || this->items.max_size() < this->getN())
		throw (Span::VectorInvalid());
	if (this->getPos() + 1 > this->getN())
		throw (Span::VectorFull());
	else
	{
		this->pos++;
		this->items.push_back(number);
	}
	// std::cout << "added " << number << std::endl;
}

void	Span::addNumber(unsigned int numbers, time_t seed)
{
	srand(seed);
	for (size_t i = 0; i < numbers; i++)
	{
		try
		{
			addNumber(rand() % 10000);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}

unsigned int	Span::shortestSpan(void) const
{
	if (this->pos == 1 || this->items.size() == 1)
		throw (Span::ComparisonInvalid());

	std::vector<int> v(this->items);

	std::sort (v.begin(), v.end());

	unsigned int ret = *v.rbegin();
	std::vector<int>::iterator aux = v.begin();
	std::vector<int>::iterator aux_next = v.begin() + 1;
	while (aux_next != v.end())
	{
		if ((unsigned int)(*aux_next - *aux) < ret)
			ret = *aux_next - *aux;
		++aux_next;
		++aux;
	}
	return (ret);
}

unsigned int	Span::longestSpan(void)const
{
	if (this->pos == 1 || this->items.size() == 1)
		throw (Span::ComparisonInvalid());

	std::vector<int> v(this->items);
	int low, high;

	std::sort (v.rbegin(), v.rend());
	high = *v.begin();

	std::sort (v.begin(), v.end());
	low = *v.begin();

	return (high - low);
}

unsigned int Span::getN() const{
	return(this->N);
}

unsigned int Span::getPos() const{
	return(this->pos);
}

const char	*Span::VectorInvalid::what() const throw()
{
	return ("Error: Vector Invalid");
}

const char	*Span::VectorFull::what() const throw()
{
	return ("Error: Vector full");
}

const char	*Span::ComparisonInvalid::what() const throw()
{
	return ("Error: more than one element in vector needed to be compared");
}

void Span::allItems() {
	for (std::vector<int>::iterator i = this->items.begin(); i != this->items.end(); i++)
	{
		std::cout << *i << std::endl;
	}
	
}