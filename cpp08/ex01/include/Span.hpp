/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:08:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 20:18:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>


class Span
{
	private:
		unsigned int	_maxN;

	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator=(const Span &copy);

	// methods
	void			addNumber(unsigned int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

};



#endif

