/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:29:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 21:27:45 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

//  ./PmergeMe 100 4 789 33 44 1000 4 6 234 768678 345 5 3 45 345 56 75 67 2 3 25 45 676  345 23 42 3 35 56 8 6 3 4 
// Before: 100 4 789 33 44 1000 4 6 234 768678 345 5 3 45 345 56 75 67 2 3 25 45 676 345 23 42 3 35 56 8 6 3 4 
// After: 2 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 4 6 6 35 42 45 45 56 75 100 345 345 676 789 1000 768678 
// Time to process a range of 33 elements with std::vector : 80 us
// Time to process a range of 33 elements with std::list : 127 us

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: no arguments given" << std::endl;
		return 1;
	}
	std::vector<int>	vec;
	std::list<int>		list;

	if (!convertNums(argv, vec, list))
		return 1;

	sortNums(vec, list);

	return 0;
}
