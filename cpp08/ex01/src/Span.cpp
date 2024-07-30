/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/30 15:54:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

// default
Span::Span() : _vecN(0), _maxN(0) {}

// destructor
Span::~Span() {}

// param constructor
Span::Span(unsigned int N)
{
	this->_maxN = N;
	this->_vecN.reserve(N);
}

// copy constructor
Span::Span(const Span &copy)
{
	*this = copy;
}

// copy assignment operator
Span	&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->_vecN = copy._vecN;
		this->_maxN = copy._maxN;
	}
	return *this;
}


// methods

// access private attributes of Span, get the size and print the vector values
ulong		Span::spanSize()
{
	return this->_vecN.size();
}

unsigned int	Span::maxSize()
{	
	return this->_maxN;
}

int		&Span::operator[](unsigned int i)
{
	if (i >= this->_vecN.size())
		throw std::out_of_range("Index out of vector range");
	return this->_vecN[i];
}

void	Span::printVectorValues()
{
	try
	{
		for (uint i = 0; i < this->_maxN; i++)
		{
			std::cout << "[" << i << "]  " << this->_vecN[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

// add a single number to the Span. It will be used in order to fill it.
// any attempt to add a new element if there are already N elements stored should throw an exception
void			Span::addNumber(unsigned int num)
{
	try
	{
		if (_vecN.size() >= _maxN)
			throw std::out_of_range("Not enough space in vector for another element");

		_vecN.push_back(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


// fill your Span using a range of iterators.
// implement a member function to add many numbers to your Span in one call.
// adding to the end of the _vecN vector, the nums elements from begin to end
void			Span::addNumbers(std::vector<int> nums)
{
	try
	{
		if (_vecN.size() + nums.size() > _maxN)
			throw std::out_of_range("Not enough space in vector for more numbers");

		_vecN.insert(_vecN.end(), nums.begin(), nums.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


// find out the shortest span or the longest span 
// between all the numbers stored, and return it. 
// if there are no numbers stored, or only one, no span can be found.
// thus, throw an exception
unsigned int	Span::shortestSpan()
{
	if (this->_vecN.size() < 2)
		throw std::out_of_range("need more numbers!");

	std::vector<int>	copyVecN = this->_vecN;
	std::sort(copyVecN.begin(), copyVecN.end());


	int	minSpan = copyVecN[1] - copyVecN[0];
	for (ulong i = 1; i < copyVecN.size(); i++)
	{
		int	diffs = copyVecN[i] - copyVecN[i - 1];
		minSpan = std::min(minSpan, diffs);
	}
	return minSpan;
}


unsigned int	Span::longestSpan()
{
	if (this->_vecN.size() < 2)
		throw std::out_of_range("need more numbers!");

	auto minMax = std::minmax_element(_vecN.begin(), _vecN.end());
	if (minMax.first == _vecN.end() || minMax.second == _vecN.end())
		throw std::out_of_range("invalid");

	uint	result = *minMax.second - *minMax.first;

	return result;
}


// how longest span:

	// whatever order we get it in:
	// 6 3 17 9 11

	// minMax = 3 + 17
	// check neither is null equivalent (one past last element)
	// 3 - 17 = 14 

	// max = 14


// how shortest span:

	// ascending order:
	// 3 6 9 11 17

	// firstMin = 3
	// diffs = 6 - 3 = 3
	// diffs = 9 - 6 = 3
	// diffs = 11 - 9 = 2
	// diffs = 17 - 11 = 6

	// update = 3,3 = 3
	// update = '''''''
	// update = 3,2 = 2
	// update = 6,2 = 2

	// min = 2




