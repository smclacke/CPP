/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:29:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 20:07:49 by smclacke      ########   odam.nl         */
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
	std::list<int>		list;

	if (!convertNums(argv, vec, list))
		return 1;

	sortNums(vec, list);

	return 0;
}
