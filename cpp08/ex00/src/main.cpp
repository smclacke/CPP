/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 17:28:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/19 17:01:14 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/easyfind.hpp"

int	main()
{
	int	x = 8;
	int	y = 18;
	int	z = 7;
	int	a = 3;
	std::vector<int>	vec = {41, 7, 65, 2, 8, 100, 33};

	try
	{
		::easyfind(vec, x);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		::easyfind(vec, y);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(vec, z);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(vec, a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

