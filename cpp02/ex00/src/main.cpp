/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 21:30:44 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/17 19:55:35 by smclacke      ########   odam.nl         */
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

/**
 * Floating point numbers:
 * 
 * 		- big part + small part, computers keep track of numbers that can be super big or super tiny
 * 		- e.g. 123.45, 123 bigs steps with 0.45 as a fraction of a step and use this
 * 			info to calculate a precise location/distance etc.. 
 * 		- this way the big picture and the tiny details are represented in numbers
 *
 * 		- fractional bits represent the part of the number after the decimal point
 * 			e.g. 123.45, '45' is the fractional part
 * 
 *		- watch out with '==' due to inaccuracy
 *		- 4 byte floating point number can actually hold fewer distinct values than a 4 byte integer
 * 
 *		- accuracy vs precision
 *			accuracy - how close to the true value
 *			precision - amount of info about quantity, how uniquely you pinned the value down
 *
 * 		- 2 is 2 is pretty accurate, using these whole numbers I will always get a number that matches the correct answer bit-for-bit
 * 			However, integers lack precision. Dividing both 5 and 4 by 2, for instance, will both yield 2. 
 * 			Integers are unable to keep track of the fractional part, so the information that I had a 
 * 			slightly bigger number than 4 (namely, 5) is lost in the process
 * 
 * 		- https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
 * 			shit to do with the representation + format of floating point numbers..
 * 
 * 		- it is really hard to know when two floats are equal.. '==' tells you if the floats match bit for bit
 * 			but this makes no sense to compare bits when some bits might be incorrect anyway
 * 			results need to be rounded to fit in a finite word
 * 			and if this rounded is done differently than expected, the equality tests might fail
 * 
 * 		- numerical overflow - adding one to largest possible unsigned integer will give zero.
 * 		- can use floats for checking overflow in integer math, calculate in floating point, then compare result to e.g. INT_MAX, 
 * 			then cast back to integer
 * 		- but becareful casting... our float might not have enough precision to preserve an entire integer
 * 			A 32-bit integer can represent any 9-digit decimal number, but a 32-bit float only offers about 7 digits of precision
 * 
 * 
 * Fixed point numbers:
 * 
 * 		- a certain number of digits are reserved for the fractional part of the number and the rest the interger part
 *		- the position of the decimal point doesn't change (floating point numbers it does)
 * 		- helpful when you want predictable precision but don't want to deal with really large or really tiny numbers
 * 
 * 
 * Operator Overloading:
 * 
 * 		- a compile-time polymorphism
 * 		- gives a special meaning to an existing operator wihtout changing the original meaning
 * 		- e.g. '+' - can be overloaded in the class String so that we can concatenate two strings but only just +
 * 
 */