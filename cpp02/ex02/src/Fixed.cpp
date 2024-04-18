/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 22:21:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/18 17:18:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

// ---- Constructors ---- //
Fixed::Fixed() : _fpValue(0){}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int integerVar)
{
	this->_fpValue = integerVar << _fractional;
}

Fixed::Fixed(const float floatVar)
{
	this->_fpValue = roundf(floatVar * (1 << _fractional));
}


// ---- Operators ---- //
/**
	check not trying to copy itself
	copy object and return reference to it
	'=' now also (in addition to assignment) creates deep copy of value 
*/
Fixed	&Fixed::operator=(const Fixed &value)
{
	if (this != &value)
		_fpValue = value.getRawBits();
	return *this;
}

// Overload of the insertion (<<) operator 
// inserts a floating-point representation of the fixed-point number into
// the output-stream object passed as parameter
std::ostream&		operator<<(std::ostream &out, Fixed const &fixed)
{
	return (out << fixed.toFloat());
}


// ---- Destructor ---- //
Fixed::~Fixed(){}


// ---- Min Max functions ---- //
Fixed&	minRef(Fixed& fp1, Fixed& fp2)
{
	std::cout << "min ref" << std::endl;
}

Fixed&	minCon(const Fixed& fp1, const Fixed& fp2)
{
	std::cout << "min const" << std::endl;
}

Fixed&	maxRef(Fixed& fp1, Fixed& fp2)
{
	std::cout << "max ref" << std::endl;
}
Fixed&	maxCon(const Fixed& fp1, const Fixed& fp2)
{
	std::cout << "max const" << std::endl;	
}


// ---- Convert Functions---- //
float	Fixed::toFloat(void) const
{
	return ((float)_fpValue / (1 << _fractional));
}

int		Fixed::toInt(void) const
{
	return ((int)_fpValue >> _fractional);
}


// ---- Getters / Setters ---- //
// returns raw value of fixed-point value
int		Fixed::getRawBits() const
{
	return _fpValue;
}

// sets raw value of fixed-point number
void	Fixed::setRawBits(int const raw)
{
	_fpValue = raw;
}
