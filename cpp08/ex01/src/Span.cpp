/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 16:46:56 by smclacke      ########   odam.nl         */
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
	return this->_maxN;
}

int		&Span::operator[](unsigned int i)
{
	try
	{
		if (i >= this->_vecN.size())
			throw std::out_of_range("Index out of vector range");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return this->_vecN[i];
}

// add a single number to the Span. It will be used in order to fill it.
// any attempt to add a new element if there are already N elements stored should throw an exception
void			Span::addNumber(unsigned int num)
{
	try
	{
		if (_vecN.size() >= _maxN)
			throw std::out_of_range("Not enough space in vector for more numbers");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	_vecN.push_back(num);
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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	_vecN.insert(_vecN.end(), nums.begin(), nums.end());
}


// // find out the shortest span or the longest span (or distance, if you prefer) 
// // between all the numbers stored, and return it. 
// // if there are no numbers stored, or only one, no span can be found.
// // thus, throw an exception
// unsigned int	Span::shortestSpan()
// {
	
// }

// unsigned int	Span::longestSpan()
// {

// }
