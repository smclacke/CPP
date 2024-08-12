/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 18:00:33 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

static bool	convertVec(char *str, std::vector<int> &vec)
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
		vec.push_back(num);
	}
	catch(const std::out_of_range& e)
	{
		std::cout << "Error: can't convert input" << std::endl;
		return false;
	}
	return true;
}

static bool	convertList(char *str, std::list<int> &list)
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
		list.push_back(num);
	}
	catch(const std::out_of_range& e)
	{
		std::cout << "Error: can't convert input" << std::endl;
		return false;
	}
	return true;
}

bool	convertNums(char **args, std::vector<int> &vec, std::list<int> &list)
{
	for (size_t i = 1; args[i]; i++)
	{
		if (!convertVec(args[i], vec))
			return false;
		if (!convertList(args[i], list))
			return false;
	}
	return true;
}

// void	sortNums(std::vector<int> &vec, std::deque<int> &deq)
// {
	// sort
	// time stuff
	// print
// }


