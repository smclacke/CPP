/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:02 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 16:04:09 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"


int	main()
{
	// Span sp = Span(5);

	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	

	// // more testing...

	// // Test your Span at least with a minimum of 10 000 numbers. More would be
	// // even better

	Span	pan = Span(10);

	pan.addNumber(78);
	pan.addNumber(32);
	pan.addNumber(45);
	pan.addNumber(51);
	pan.addNumber(9);
	pan.addNumber(3);
	pan.addNumber(300);
	pan.addNumber(300);
	pan.addNumber(30);
	pan.addNumber(130);
	// pan.addNumber(230);

	return 0;

}


// expected output:
// 2
// 14
