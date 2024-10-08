/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/14 19:31:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cctype>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <ctime>
# include <chrono>

// methods
int		sortNums(char **args, std::vector<int> &vec, std::deque<int> &deque);


// templates
template <class Container>
bool	convertContain(char **args, Container &container)
{
	for (size_t i = 1; args[i]; i++)
	{	
		if (!args[i][0])
		{
			std::cout << "Error: invalid input" << std::endl;
			return false;
		}
		for (size_t j = 0; args[i][j]; j++)
		{
			if (!isdigit(args[i][j]))
			{
				std::cout << "Error: invalid input" << std::endl;
				return false;
			}
		}
		try
		{
			int num = std::stoi(args[i]);
			container.push_back(num);
		}
		catch(const std::out_of_range& e)
		{
			std::cout << "Error: can't convert input" << std::endl;
			return false;
		}
	}
	return true;
}

template <class Container>
int	printNums(Container &container)
{
	int total = 0;
	std::cout << "After:   ";

	typename Container::iterator it;
	for (it = container.begin(); it != container.end(); it++)
	{
		std::cout << *it << " ";
		total++;
	}
	std::cout << std::endl;
	return total;
}


#endif
