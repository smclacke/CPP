/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:08:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 14:56:06 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>


class Span
{
	private:
		unsigned int	_N;

	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator=(const Span &copy);

	// getters
	unsigned int	getN() const;

	// methods
	void			addNumber(unsigned int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

};



#endif

