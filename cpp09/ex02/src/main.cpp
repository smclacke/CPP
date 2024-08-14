/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:29:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/14 16:50:48 by smclacke      ########   odam.nl         */
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

	return sortNums(argv, vec, deque);
}

// ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`


/**
 * 
 * // --- from wiki --- //
 * Merge-insertion sort performs the following steps on an input X of n elements:
 * 1. group elements of X into [n/2] pairs of elements, leaving one element 
 * 		unpaired if elements total is odd
 * 
 * 2. perform [n/2] comparisons, one per pair to determine the larger of two elements
 * 		in each pair
 * 
 * 3. recursively sort the [n/2] larger elements from each pair, creating a sorted sequence S of [n/2]
 * 		of input elements, in ascending order
 * 
 * 4. insert at start S the element that was paired with the first and smallest element
 * 		of S
 * 
 * 5. insert remaining [n/2] - 1 elements of X / S into S, one at a time, with a 
 * 		specifically chosen insertion ordering (jacob??)
 * 		use binary search in subsequences of S to determine the position at which each
 * 		element should be inserted
 * 
 * 
 * // --- //
 * 
 * given an unsorted list, group the list into pairs, if odd, last element is unpaired
 * each pair is sorted (using a single comparison each) into pairs recursively based on the first in the pair [a1 b1] [a2 b2]
 * if odd, last element is the last b
 * can now use binary-search-insertion to insert any b into the sorted list (which starts off as just a elements)
 * we only need to consider the elements "left" of the b in question [b4, consider t/m a3]
 * use Jacobsthal Numbers: [1 3 2 5 4 11 10 9 8 7 6 21 20 19 18 ...] (ignoring values greater than the bs we have)
 * insert bs, one at a time into sorted list follownig above progression, eventually resulting in a sorted list
 * 
 * the order of such comparisons can be determined by the interger progression called jacobsthal numbers (optimizing for the worst-case)
 * 
 */
