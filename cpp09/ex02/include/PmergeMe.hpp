/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/13 16:48:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cctype>
# include <algorithm>
# include <vector>
# include <deque>
# include <ctime>
# include <chrono>

// The Ford-Johnson algorithm can be understood in terms of merging and insertion strategies:
// "Merge-Insertion" algorithm

// Step 1: Start by comparing pairs of elements. The smallest element from each pair
// 		 is inserted into the list, while the larger one is temporarily set aside.

// Step 2: Sort the smaller elements using a highly efficient sorting method (which could be 
// 		a recursive application of the Ford-Johnson algorithm or another efficient method).

// Step 3: Merge the sorted list of smaller elements with the larger elements that were set 
// 		aside earlier.

// Step 4: Insert the larger elements into the appropriate positions within the sorted list.


// methods
void	sortNums(char **args, std::vector<int> &vec, std::deque<int> &deque);


// templates
template <class Container>
bool	convertContain(char *str, Container &container)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Error: invalid input" << std::endl;
			return false;
		}
	}
	try
	{
		int num = std::stoi(str);
		container.push_back(num);
	}
	catch(const std::out_of_range& e)
	{
		std::cout << "Error: can't convert input" << std::endl;
		return false;
	}
	return true;
}

template <class Container>
bool	convertNums(char **args, Container &container)
{
	for (size_t i = 1; args[i]; i++)
	{
		if (!convertContain(args[i], container))
			return false;
	}
	return true;
}


template <class Container>
int	printNums(Container &container, int flag)
{
	int	total = 0;

	if (flag == 1)
		std::cout << "Before: ";
	else
		std::cout << "After: ";

	typename Container::iterator it;
	for (it = container.begin(); it != container.end(); it++)
	{
		std::cout << *it << " ";
		total++;
	}
	std::cout << std::endl;

	return total;
}


template <class Container>
void	insertSort(Container &container)
{
	typename Container::iterator	it;

	for (it = container.begin(); it != container.end(); it++)
	{
		auto const interstion_point = std::upper_bound(container.begin(), it, *it);
		std::rotate(interstion_point, it, it + 1);
	}
}

template <class Container>
void	mergeInsertSort(Container &container)
{
	size_t	len = container.size();
	size_t	max = 100;

	if (len > max)
	{
		typename Container::iterator	begin = container.begin();
		typename Container::iterator	mid = container.begin();
		typename Container::iterator	end = container.end();
		std::advance(mid, container.size() / 2);

		Container	left(begin, mid);
		Container	right(mid, end);

		if (left.size() > 1)
			mergeInsertSort(left);
		if (right.size() > 1)
			mergeInsertSort(right);
		std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
	}
	else
		insertSort(container);
}


#endif
