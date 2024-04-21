/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:31:11 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 19:06:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include <iomanip>

class	Fixed
{
	private:
		int					_fpValue;					// fixed point value
		static const int	_fractional = 8;			// bits after decimal

	public:
		Fixed();										// Default constructor
		Fixed(const Fixed &value);						// Copy constructor
		Fixed	&operator=(const Fixed &value);			// Copy assignment operator 
		~Fixed();										// Destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};


#endif
