/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:29:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/13 16:19:17 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: no arguments given" << std::endl;
		return 1;
	}
	std::vector<int>	vec;
	std::deque<int>		deque;

	auto	startVec = std::chrono::high_resolution_clock::now();
	auto	startDeque = std::chrono::high_resolution_clock::now();
	// int amount = printNums(deque, 1);

	if (!convertNums(argv, vec, deque))
		return 1;

	int amount = printNums(vec, 1);
	sortNums(vec, deque);

	auto	endVec = std::chrono::high_resolution_clock::now();
	auto	durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();
	auto	endDeque = std::chrono::high_resolution_clock::now();
	auto	durationDeque = std::chrono::duration_cast<std::chrono::microseconds>(endDeque - startDeque).count();

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::deque : " << durationDeque << " us" << std::endl;


	return 0;
}
