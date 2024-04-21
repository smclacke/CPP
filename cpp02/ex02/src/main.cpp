/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 22:21:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 20:15:14 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;


//----------- own tests ------------//

// 	std::cout << std::endl;

// 	Fixed const	d(Fixed(22.77f));
// 	std::cout << "d = " << d << std::endl;

// //-----------------//

// 	std::cout << std::endl;

// 	Fixed	c = b;
// 	std::cout << "c = " << c << std::endl;

// 	std::cout << c++ << std::endl;
// 	std::cout << "POST c++ = " << c << std::endl;

// //-----------------//

// 	std::cout << std::endl;

// 	Fixed	e = c;
// 	std::cout << "e = " << e << std::endl;
// 	std::cout << --e << std::endl;
// 	std::cout << "PRE --e = " << e << std::endl;
	
// 	std::cout << e++ << std::endl;
// 	std::cout << "POST e++ = " << e << std::endl;

// //-----------------//

// 	std::cout << std::endl;

// 	std::cout << "min(a, c) = " << Fixed::min(a, c) << std::endl;


	return 0;
}

/*
 * output:

	0
	0.00390625
	0.00390625
	0.00390625
	0.0078125
	10.1016
	10.1016

*/
