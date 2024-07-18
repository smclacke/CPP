/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:08:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 16:38:27 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int>		_vecN;
		unsigned int			_maxN;

	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator=(const Span &copy);

	// methods
	ulong			spanSize();
	int				&operator[](unsigned int i);

	void			addNumber(unsigned int num);
	void			addNumbers(std::vector<int> nums);
	// unsigned int	shortestSpan();
	// unsigned int	longestSpan();

};



#endif

