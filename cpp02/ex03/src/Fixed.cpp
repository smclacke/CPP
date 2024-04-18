/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 22:21:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/18 20:42:25 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

// ---------------------- //
// ---- Constructors ---- //
// ---------------------- //
Fixed::Fixed() : _fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed	&value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed::Fixed(const int integerVar)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpValue = integerVar << _fractional;
}

Fixed::Fixed(const float floatVar)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpValue = roundf(floatVar * (1 << _fractional));
}


// ------------------- //
// ---- Operators ---- //
// ------------------- //
// don't copy self, copy object and return reference to it
// '=' now also (in addition to assignment) creates deep copy of value 
Fixed	&Fixed::operator=(const Fixed	&value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		_fpValue = value.getRawBits();
	return *this;
}

// inserts a floating-point representation of the fixed-point number into
// the output-stream object passed as parameter
std::ostream	&operator<<(std::ostream	&out, Fixed const &fixed)
{
	return (out << fixed.toFloat());
}


// -------------------- //
// ---- Destructor ---- //
// -------------------- //
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


// ------------------------------ //
// ---- Comparison Operators ---- //
// ------------------------------ //
bool	Fixed::operator>(const Fixed	&fp) const
{
	return (this->getRawBits() > fp.getRawBits());
}

bool	Fixed::operator<(const Fixed	&fp) const
{
	return (this->getRawBits() < fp.getRawBits());
}

bool	Fixed::operator>=(const Fixed	&fp) const
{
	return (this->getRawBits() >= fp.getRawBits());
}

bool	Fixed::operator<=(const Fixed	&fp) const
{
	return (this->getRawBits() <= fp.getRawBits());
}

bool	Fixed::operator==(const Fixed	&fp) const
{
	return (this->getRawBits() == fp.getRawBits());
}

bool	Fixed::operator!=(const Fixed	&fp) const
{
	return (this->getRawBits() != fp.getRawBits());
}

// ------------------------------ //
// ---- Arithmetic Operators ---- //
// ------------------------------ //
Fixed	Fixed::operator+(const Fixed	&fp) const
{
	return (this->toFloat() + fp.toFloat());
}

Fixed	Fixed::operator-(const Fixed	&fp) const
{
	return (this->toFloat() - fp.toFloat());
}

Fixed	Fixed::operator*(const Fixed	&fp) const
{
	return (this->toFloat() * fp.toFloat());
}

Fixed	Fixed::operator/(const Fixed	&fp) const
{
	return (this->toFloat() / fp.toFloat());
}


// --------------------------------------- //
// ---- Increment/decrement Operators ---- //
// --------------------------------------- //
Fixed	&Fixed::operator++()
{
	this->_fpValue++;
	return (*this);
}

Fixed	Fixed::operator++(int intVal)
{
	(void)	intVal;
	Fixed	var(*this);

	this->_fpValue++;
	return (var);
}

Fixed	&Fixed::operator--()
{
	this->_fpValue--;
	return (*this);
}

Fixed	Fixed::operator--(int intVal)
{
	(void)	intVal;
	Fixed	var(*this);

	this->_fpValue--;
	return (var);
}

// --------------------------- //
// ---- Min / Max Methods ---- //
// --------------------------- //
Fixed	&Fixed::min(Fixed	&fp1, Fixed	&fp2)
{
	if (fp1 < fp2)
		return (fp1);
	else
		return (fp2);
}

const Fixed	&Fixed::min(const Fixed	&fp1, const Fixed	&fp2)
{
	if (fp1 < fp2)
		return (fp1);
	else
		return (fp2);
}

Fixed	&Fixed::max(Fixed	&fp1, Fixed	&fp2)
{
	if (fp1 > fp2)
		return (fp1);
	else
		return (fp2);
}
const Fixed	&Fixed::max(const Fixed	&fp1, const Fixed	&fp2)
{
	if (fp1 > fp2)
		return (fp1);
	else
		return (fp2);
}


// -------------------------- //
// ---- Convert Functions---- //
// -------------------------- //
float	Fixed::toFloat(void) const
{
	return ((float)_fpValue / (1 << _fractional));
}

int		Fixed::toInt(void) const
{
	return ((int)_fpValue >> _fractional);
}


// --------------------------- //
// ---- Getters / Setters ---- //
// --------------------------- //
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
