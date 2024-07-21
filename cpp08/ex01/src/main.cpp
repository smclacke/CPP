/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:02 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/21 15:24:14 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(17);
	sp.addNumber(3);
	sp.addNumber(9);
	sp.addNumber(11);
	
	// can't find a way of not returning an int from these methods
	// so i need to use try/catch here...
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	// // more testing...

	// Span				pan = Span(100);
	// std::vector<int>	pans = {9, 4, 2, 6, 4};
	// std::vector<int>	bigPan(10000000);

	// pan.addNumber(78);
	// pan.addNumber(32);
	// pan.addNumber(45);
	// pan.addNumber(51);
	// pan.addNumber(9);
	// pan.addNumber(3);

	// pan.addNumbers(bigPan);
	// pan.addNumber(300);

	// pan.addNumbers(pans);
	// pan.addNumbers(pans);
	// pan.addNumbers(pans);

	
	// printing
	
	// dont really need spanSize() but just leaving cause testing and shizz
	// size() used on vector itself gives what has been added
	// std::cout << "span size = " << pan.spanSize() << std::endl;

	// // size() used to get the max amount passed in constructor with N
	// std::cout << "max size = " << pan.maxSize() << std::endl;

	// exit(0);

	// for (uint i = 0; i < pan.maxSize(); i++)
	// 	std::cout << "[" << i << "]  " << pan[i] << std::endl;


	return 0;

}


// expected output:
// 2
// 14
