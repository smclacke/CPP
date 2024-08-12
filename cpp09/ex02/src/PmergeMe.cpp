/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 17:53:07 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

static bool	convertVec(char *str, std::vector<int> &vec)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!isdigit(str[i])) // check min + max
		{
			std::cout << "Error: invalid input" << std::endl;
			return false;
		}
	}
	try
	{
		int  num = std::stoi(str);
		vec.push_back(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return true;
}

static bool	convertDeq(char *str, std::deque<int> &deq)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!isdigit(str[i])) // check min + max
		{
			std::cout << "Error: invalid input" << std::endl;
			return false;
		}
	}
	try
	{
		int  num = std::stoi(str);
		deq.push_back(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return true;
}

bool	convertNums(char **args, std::vector<int> &vec, std::deque<int> &deq)
{
	for (size_t i = 1; args[i]; i++)
	{
		if (!convertVec(args[i], vec))
			return false;
		if (!convertDeq(args[i], deq))
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


