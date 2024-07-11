/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:07:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 21:27:33 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/iter.hpp"

int	main()
{
	// iter ( address of an array, length of array, function called on every element of array)
	// ::iter

	int	array[] = {1, 4};

	std::cout << ::iter(array, sizeof(array), ::func(array)) << std::endl;
	std::cout << ::func(2) << std::endl;

	return 0;
}
