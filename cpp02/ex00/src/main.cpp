/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:30:44 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/17 02:04:56 by SarahLouise   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

int		main() 
{
	Fixed a;    		// default constructor
	Fixed b( a ); 		// copy constructor
	Fixed c;			// copy assignment operator

	c = b; 		// copy assignment operator overloadinnnnggggggg
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}


/**
 * expected output:
 * 
		Default constructor called
		Copy constructor called
		Copy assignment operator called // <-- This line may be missing depending on your implementation
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
