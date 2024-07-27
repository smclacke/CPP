/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 20:09:02 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/27 17:50:37 by smclacke      ########   odam.nl         */
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
	
	
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "------" << std::endl;
	
	sp.printVectorValues();
	
	sp.addNumber(100);

	std::cout << std::endl;

	std::cout << "---------------------------------" << std::endl;
// --------------------------------------------------------------//

	Span				pan = Span(10);

	pan.addNumber(78);
	pan.addNumber(32);
	pan.addNumber(45);
	pan.addNumber(51);
	pan.addNumber(9);
	pan.addNumber(3);
	pan.addNumber(311);
	pan.addNumber(911);
	pan.addNumber(211);
	pan.addNumber(1);
	pan.addNumber(35);
	pan.addNumber(33);
	pan.addNumber(344);

	
	pan.printVectorValues();

	std::vector<int>	pans = {9, 4, 2, 6, 4};
	std::vector<int>	bigPan(10000000);
	pan.addNumbers(pans);
	pan.addNumbers(bigPan);

	std::cout << std::endl;

	std::cout << "span size = " << pan.spanSize() << std::endl;
	std::cout << "max size = " << pan.maxSize() << std::endl;

	try
	{
		std::cout << pan.shortestSpan() << std::endl;
		std::cout << pan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "---------------------------------" << std::endl;
// --------------------------------------------------------------//
	
	Span				smallSpan(4);
	std::vector<int>	nums = {3, 56, 7, 6};
	
	// smallSpan.addNumber(3);
	// smallSpan.addNumber(56);
	
	smallSpan.addNumbers(nums);

	std::cout << "span size = " << pan.spanSize() << std::endl;
	std::cout << "max size = " << pan.maxSize() << std::endl;

	// space is reserved in vector (size 4), 
	// if nothing explicitly added to vector, random int 
	// fills the space
	smallSpan.printVectorValues();
	
	smallSpan.addNumber(777);
	smallSpan.printVectorValues();

	std::cout << std::endl;

	std::cout << "---------------------------------" << std::endl;
// --------------------------------------------------------------//

	// Span				bigSpam(100020);
	// std::vector<int>	spamming(100000);

	// for (uint i = 0; i < spamming.size(); i++)
	// 	spamming[i] = i + 40;

	// bigSpam.addNumbers(spamming);
	// bigSpam.addNumber(2300000);
	// bigSpam.addNumber(24);
	// bigSpam.addNumber(250);
	// bigSpam.addNumber(26);
	// bigSpam.addNumber(26);
	// bigSpam.addNumber(260);
	// bigSpam.addNumber(26);
	// bigSpam.addNumber(267);
	// bigSpam.addNumber(269);
	// bigSpam.addNumber(260);
	// bigSpam.addNumber(268);
	// bigSpam.addNumber(262);
	// bigSpam.addNumber(2063);
	// bigSpam.addNumber(2064);

	// bigSpam.printVectorValues();

	// try
	// {
	// 	std::cout << bigSpam.shortestSpan() << std::endl;
	// 	std::cout << bigSpam.longestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	
	return 0;

}
