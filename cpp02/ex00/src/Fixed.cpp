/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:33:15 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/17 02:00:02 by SarahLouise   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed() : _fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}
/**
	check not trying to copy itself
	copy object and return reference to it
*/
Fixed	&Fixed::operator=(const Fixed &value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		_fpValue = value.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// returns raw value of fixed-point value
int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fpValue;
}

// sets raw value of fixed-point number
void	Fixed::setRawBits(int const raw)
{
	_fpValue = raw;
}
