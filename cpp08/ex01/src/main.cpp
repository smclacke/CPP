/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:02 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/18 16:47:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

// Test your Span at least with a minimum of 10 000 numbers

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

	Span				pan = Span(15);
	std::vector<int>	pans = {9, 4, 2, 6, 4};

	pan.addNumber(78);
	pan.addNumber(32);
	pan.addNumber(45);
	pan.addNumber(51);
	pan.addNumber(9);
	pan.addNumber(3);
	pan.addNumber(300);
	pan.addNumber(300);
	// pan.addNumber(30);
	// pan.addNumber(130);
	// pan.addNumbers(pans);
	// pan.addNumbers(pans);
	// pan.addNumbers(pans);

	std::vector<int>	bigVec(10000); // give random values and not just 0s

	pan.addNumbers(bigVec); // why is this working?? vector should be out of space

	
	std::cout << pan.spanSize() << std::endl;
	
	for (ulong i = 0; i < pan.spanSize(); i++)
		std::cout << "[" << i << "]" << pan[i] << std::endl;


	return 0;

}


// expected output:
// 2
// 14
