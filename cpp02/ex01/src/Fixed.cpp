/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 22:21:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/18 14:43:38 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

// ---- Constructors ---- //
Fixed::Fixed() : _fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed::Fixed(const int integerVar)
{
	std::cout << "Int constructor called" << std::endl;
	_fpValue = integerVar;
}
// float       roundf( float num ); ??
Fixed::Fixed(const float floatVar)
{
	std::cout << "Float constructor called" << std::endl;
	_fpValue = floatVar;
}

// ---- Operators ---- //
/**
	check not trying to copy itself
	copy object and return reference to it
	'=' now also (in addition to assignment) creates deep copy of value 
*/
Fixed	&Fixed::operator=(const Fixed &value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		_fpValue = value.getRawBits();
	return *this;
}

// Overload of the insertion (<<) operator 
// inserts a floating-point representation of the fixed-point number into
// the output stream object passed as parameter

// '<<' adding new usage to standard use  to whatever happens in this func
//And add the following function to the Fixed class files:
// •An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter
std::ostream&		operator<<(std::ostream &out, Fixed const &fixed)
{
	// return thingy << function ?? << ostream
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
