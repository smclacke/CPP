/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:31:11 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 18:48:44 by smclacke      ########   odam.nl         */
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
		Fixed(const int integerVar);					// Int Constructor: converts corresponding FP value
		Fixed(const float floatVar);					// Float Constructor: convert corresponding FP value
		Fixed(const Fixed	&value);					// Copy constructor
		Fixed	&operator=(const Fixed &value);			// Copy assignment operator 
		~Fixed();										// Destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// Comparison Operators: > < >= <= == != 
		bool	operator>(const Fixed	&fp) const;
		bool	operator<(const Fixed	&fp) const;
		bool	operator>=(const Fixed	&fp) const;
		bool	operator<=(const Fixed	&fp) const;
		bool	operator==(const Fixed	&fp) const;
		bool	operator!=(const Fixed	&fp) const;

		// Arithmetic Operators: + - * /
		Fixed	operator+(const Fixed	&fp) const;
		Fixed	operator-(const Fixed	&fp) const;
		Fixed	operator*(const Fixed	&fp) const;
		Fixed	operator/(const Fixed	&fp) const;
		
		// Incerment/Decrement Operators: ++ -- (pre and post)
		Fixed	operator++(void);
		Fixed	operator++(int intVal);
		Fixed	operator--(void);
		Fixed	operator--(int intVal);

		// Min / Max Methods
		static			Fixed	&min(Fixed	&fp1, Fixed	&fp2);
		static	const 	Fixed	&min(const Fixed	&fp1, const Fixed	&fp2);
		static			Fixed	&max(Fixed	&fp1, Fixed	&fp2);
		static	const 	Fixed	&max(const Fixed	&fp1, const Fixed	&fp2);

};

std::ostream	&operator<<(std::ostream	&out, Fixed const &fixed);

#endif
