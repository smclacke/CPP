/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/13 00:00:57 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

bool	convertNums(char **args, std::vector<int> &vec, std::list<int> &list)
{
	for (size_t i = 1; args[i]; i++)
	{
		if (!convertContain(args[i], vec))
			return false;
		if (!convertContain(args[i], list))
			return false;
	}
	printNums(list, 1);
	return true;
}


void	sortNums(std::vector<int> &vec, std::list<int> &list)
{
	auto	startVec = std::chrono::high_resolution_clock::now();
	vectorSort(vec);
	auto	endVec = std::chrono::high_resolution_clock::now();
	auto	durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();

	auto	startList = std::chrono::high_resolution_clock::now();
	listSort(list);
	auto	endList = std::chrono::high_resolution_clock::now();
	auto	durationList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList).count();

	// int amount = printNums(list, 2);
	int amount = printNums(vec, 2);

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::list : " << durationList << " us" << std::endl;

}


