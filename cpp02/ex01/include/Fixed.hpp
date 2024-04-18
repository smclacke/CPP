/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:31:11 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/18 14:41:16 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class	Fixed
{
	private:
		int					_fpValue;
		static const int	_fractional = 8;

	public:
		Fixed();										// Default constructor
		Fixed(const int integerVar);						// Int Constructor: converts corresponding FP value
		Fixed(const float floatVar);					// Float Constructor: convert corresponding FP value
		Fixed(const Fixed &value);						// Copy constructor
		Fixed&	operator=(const Fixed &value);			// Copy assignment operator 
		~Fixed();										// Destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

// Overload of the insertion (<<) operator 
// inserts a floating-point representation of the fixed-point number into
// the output stream object passed as parameter
std::ostream&		operator<<(std::ostream &out, Fixed const &fixed);

#endif
