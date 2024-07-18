/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 16:01:35 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

// extra notes on vector functions
// reserve: vector capacity be at least enough to contain n elements
// size: number of actual objects held in the vector, which is not necessarily equal to its storage capacity
// capacity: capacity is not necessarily equal to the vector size. It can be equal or greater, with the extra 
// 		space allowing to accommodate for growth without the need to reallocate on each insertion
// push_back: Adds a new element at the end of the vector, after its current last element
// 		The content of val is copied (or moved) to the new element

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

// size: number of actual objects held in the vector, which is not necessarily equal to its storage capacity

// add a single number to the Span. It will be used in order to fill it.
// Any attempt to add a new element if there are already N elements stored should throw an exception
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
// Making thousands calls to addNumber() is so annoying. Implement a member function
// to add many numbers to your Span in one call.
// void			Span::addNumbers()
// {
	
// }

// // find out the shortest span or the longest span (or distance, if you prefer) 
// // between all the numbers stored, and return it. 
// // If there are no numbers stored, or only one, no span can be found.
// // Thus, throw an exception
// unsigned int	Span::shortestSpan()
// {
	
// }

// unsigned int	Span::longestSpan()
// {

// }
