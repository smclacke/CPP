/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 20:26:59 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

// default
Span::Span() : _maxN(0) {}

// destructor
Span::~Span() {}

// param constructor
Span::Span(unsigned int N) : _maxN(N) {}

// copy constructor
Span::Span(const Span &copy)
{
	*this = copy;
}

// copy assignment operator
Span	&Span::operator=(const Span &copy)
{
	
}



// methods

// add a single number to the Span. It will be used in order to fill it.
// Any attempt to add a new element if there are already N elements stored should throw an exception
void			addNumber(unsigned int num)
{
	
}


// find out the shortest span or the longest span (or distance, if you prefer) 
// between all the numbers stored, and return it. 
// If there are no numbers stored, or only one, no span can be found.
// Thus, throw an exception
unsigned int	shortestSpan()
{
	
}

unsigned int	longestSpan()
{

}



// Last but not least, it would be wonderful to fill your Span using a range of iterators.
// Making thousands calls to addNumber() is so annoying. Implement a member function
// to add many numbers to your Span in one call


