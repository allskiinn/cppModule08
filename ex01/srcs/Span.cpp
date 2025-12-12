#include "../includes/Span.hpp"

Span::Span(unsigned int N): size(N), pos(0)
{
	std::cout << "Span Constructor for size of " << N << " called" << std::endl;
	this->numbers.reserve(this->getSize());
}

Span::Span(const Span &src): size(src.getSize()), pos(src.getPos())
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
	if ((this->pos != 0 && this->numbers.empty() == true) || this->numbers.max_size() < this->getSize())
		throw (Span::VectorInvalidException());
	if (this->getPos() + 1 > this->getSize())
		throw (Span::ArrayFullException());
	else
	{
		this->pos++;
		this->numbers.push_back(number);
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
	if (this->pos == 1 || this->numbers.size() == 1)
		throw (Span::ComparisonInvalidException());

	std::vector<int> v(this->numbers);

	std::sort (v.begin(), v.end());

	unsigned int ret = UINT_MAX;
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
	if (this->pos == 1 || this->numbers.size() == 1)
		throw (Span::ComparisonInvalidException());

	std::vector<int> v(this->numbers);
	int low, high;

	std::sort (v.rbegin(), v.rend());
	high = *v.begin();

	std::sort (v.begin(), v.end());
	low = *v.begin();

	return (high - low);
}


unsigned int	Span::getSize() const
{
	return (this->size);
}

unsigned int	Span::getPos() const
{
	return (this->pos);
}


const char	*Span::VectorInvalidException::what() const throw()
{
	return ("Error: Invalid or broken vector");
}

const char	*Span::ArrayFullException::what() const throw()
{
	return ("Error: Array full");
}

const char	*Span::ComparisonInvalidException::what() const throw()
{
	return ("Error: more than one element in vector needed to be compared");
}
