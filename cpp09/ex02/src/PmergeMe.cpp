/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/13 16:48:42 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

void	sortNums(char **args, std::vector<int> &vec, std::deque<int> &deque)
{
	auto	startVec = std::chrono::high_resolution_clock::now();
	if (!convertNums(args, vec))
		return ;
	int amount = printNums(vec, 1);
	mergeInsertSort(vec);
	auto	endVec = std::chrono::high_resolution_clock::now();
	auto	durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();
	

	auto	startDeque = std::chrono::high_resolution_clock::now();
	if (!convertNums(args, deque))
		return ;
	mergeInsertSort(deque);
	auto	endDeque = std::chrono::high_resolution_clock::now();
	auto	durationDeque = std::chrono::duration_cast<std::chrono::microseconds>(endDeque - startDeque).count();

	printNums(vec, 2);

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::deque : " << durationDeque << " us" << std::endl;

}
