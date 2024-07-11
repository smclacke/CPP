/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 20:08:23 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 20:13:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/whatever.hpp"

// functions can be called with any type of argument
// the two arguments must have the same type and 
// must support all the comparison operators

// swap: Swaps the values of two given arguments. Does not return anything

// min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one

// max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one



int main()
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}


// Should output:
// a = 3, b = 2
// min(a, b) = 2
// max(a, b) = 3
// c = chaine2, d = chaine1
// min(c, d) = chaine1
// max(c, d) = chaine2
// 6
