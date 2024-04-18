/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:30:44 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/18 14:18:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

/**
 * - default constructor Fixed a
 * - copy constructor Fixed b (copying a into b)
 * - copy assignment opertor c = b (using '=' to make copy of b into c)
 */
int		main() 
{
	Fixed a;    		// default constructor
	Fixed b( a ); 		// copy constructor
	Fixed c;			// copy assignment operator

	c = b; 		// copy assignment operator overloading = to make deep copy


	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}


/**
	Fixed	d;
	std::cout << d.getRawBits() << std::endl;
	d.setRawBits(41);
	Fixed	e(d);	
	Fixed		f = e;
	
	std::cout << d.getRawBits() << std::endl;
	std::cout << e.getRawBits() << std::endl;
	std::cout << f.getRawBits() << std::endl;


 * expected output:
 * 
		Default constructor called
		Copy constructor called
		Copy assignment operator called
		getRawBits member function called
		Default constructor called
		Copy assignment operator called
		getRawBits member function called
		getRawBits member function called
		0
		getRawBits member function called
		0
		getRawBits member function called
		0
		Destructor called
		Destructor called
		Destructor called
 * 
 */
