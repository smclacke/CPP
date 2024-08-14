/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:29:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/14 16:42:58 by smclacke      ########   odam.nl         */
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
 */



/**
 * The Merge Insertion Sort algorithm is as follows:

Given an unsorted list, group the list into pairs. If the list is odd, the last element is unpaired.

Each pair is sorted (using a single comparison each) into what we will call [a b] pairs.

The pairs are sorted recursively based on the a of each, and we call the pairs [a1 b1], [a2 b2] etc. If the list was odd, the unpaired element is considered the last b.

We call the chain of as the "main-chain".

At this point, we could take any of the bs and use binary-search-insertion to insert that b into the main-chain (which starts of as just the as). When inserting, we only need to consider the values "left" of the b in question (for example, when inserting b4 we only need to consider the chain up to and including a3).

We could insert the bs in order (b1, b2 ...), but the "key insight" from above suggest otherwise. Different bs have different worst-case costs to insert into the main-chain (worst case cost for binary-search-insertion is floor(log2(N) where N is the length of the relevant part of the main-chain). We can minimize the cost by following an order based on the Jacobsthal Numbers: 1 3 2 5 4 11 10 9 8 7 6 21 20 19 18... (ignoring values which are greater than the bs we have).

And so, we insert the bs, one at a time, into the main-chain following the above progression, eventually resulting in a sorted list.

It turns out that the order of such comparisons can be determined by an integer progression called the Jacobsthal numbers, when optimizing for the worst-case.
 
 */