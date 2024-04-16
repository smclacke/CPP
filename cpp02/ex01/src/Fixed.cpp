/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 22:21:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 23:52:58 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

// ---- Constructors ---- //
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fpValue = 0;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

!!
Fixed::Fixed(const int integerVar)
{
	std::cout << "Int constructor called" << std::endl;
	
}

!!
Fixed::Fixed(const float floatVar)
{
	std::cout << "Float constructor called" << std::endl;
}

// ---- Operators ---- //
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

!!
//And add the following function to the Fixed class files:
// •An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter
std::ostream&		operator<<(std::ostream &out, Fixed const &fixed)
{
	
}


// ---- Destructor ---- //
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// ---- Convert Functions---- //
!!
float	Fixed::toFloat(void) const
{
	
}

!!		
int		Fixed::toInt(void) const
{
	
}


// ---- Getters / Setters ---- //
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
