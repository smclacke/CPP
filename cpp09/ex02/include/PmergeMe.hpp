/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/13 16:58:08 by smclacke      ########   odam.nl         */
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
		auto const insertion_point = std::upper_bound(container.begin(), it, *it);
		std::rotate(insertion_point, it, it + 1);
	}
}

template <class Container>
void	mergeInsertSort(Container &container)
{
	size_t	len = container.size();
	size_t	max = 2;

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
