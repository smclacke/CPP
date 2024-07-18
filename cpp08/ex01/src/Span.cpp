/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 15:03:18 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

// default
Span::Span() : _N(0) {}

// destructor
Span::~Span() {}

// param constructor
Span::Span(unsigned int N) : _N(N) {}

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
		this->_N = copy._N;
	}
	return *this;
}


// getters
unsigned int	Span::getN() const
{
	return this->_N;
}

// methods

// add a single number to the Span. It will be used in order to fill it.
// Any attempt to add a new element if there are already N elements stored should throw an exception
void			Span::addNumber(unsigned int num)
{
	unsigned int	N = this->getN();
	


	if (N != )
}


// find out the shortest span or the longest span (or distance, if you prefer) 
// between all the numbers stored, and return it. 
// If there are no numbers stored, or only one, no span can be found.
// Thus, throw an exception
unsigned int	Span::shortestSpan()
{
	
}

unsigned int	Span::longestSpan()
{

}



// Last but not least, it would be wonderful to fill your Span using a range of iterators.
// Making thousands calls to addNumber() is so annoying. Implement a member function
// to add many numbers to your Span in one call


