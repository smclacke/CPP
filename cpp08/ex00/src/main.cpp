/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 17:28:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 17:53:31 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/easyfind.hpp"

int	main()
{
	int	x = 5;
	typedef std::vector<int>		intContainer;
	typedef intContainer::iterator intIterator;
	intContainer	container = {1, 9, 7, 3};

	intIterator i = std::find(container.begin(), container.end(), x);

	try
	{
		if (i != container.end())
			std::cout << "Int: " << x << " found in container" << std::endl;
		else
			throw std::out_of_range("integer not found in container");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

// int	main()
// {
// 	int	x = 5;
// 	int	vec[4] = {4, 7, 2, 8};

// 	try
// 	{
// 		::easyfind(vec, x);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// 	return 0;
// }

