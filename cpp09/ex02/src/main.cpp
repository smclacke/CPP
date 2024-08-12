/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:29:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 17:53:26 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

// 	./PmergeMe 3 5 9 7 4
// 	Before: 3 5 9 7 4
// 	After: 3 4 5 7 9
// 	Time to process a range of 5 elements with std::[..] : 0.00031 us
// 	Time to process a range of 5 elements with std::[..] : 0.00014 us


// 	./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
// 	Before: 141 79 526 321 [...]
// 	After: 79 141 321 526 [...]
// 	Time to process a range of 3000 elements with std::[..] : 62.14389 us
// 	Time to process a range of 3000 elements with std::[..] : 69.27212 us


// 	./PmergeMe "-1" "2"
// 	Error
// 	# For OSX USER:
// 	./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`
// 	[...]


int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: no arguments given" << std::endl;
		return 1;
	}
	std::vector<int>	vec;
	std::deque<int>		deq;

	if (!convertNums(argv, vec, deq))
		return 1;

	// printing
	std::vector<int>::iterator itVec;
	for (itVec = vec.begin(); itVec != vec.end(); itVec++)
		std::cout << "vec : " << *itVec << std::endl;


	std::cout << std::endl << "-------------------------" << std::endl;

	// printing
	std::deque<int>::iterator itDeq;
	for (itDeq = deq.begin(); itDeq != deq.end(); itDeq++)
		std::cout << "deq : " << *itDeq << std::endl;


	// sortNums(vec, deq);
	return 0;
}
