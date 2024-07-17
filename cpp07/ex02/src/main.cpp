/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 11:53:18 by eugene        #+#    #+#                 */
/*   Updated: 2024/07/17 15:08:57 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Array.hpp"

// Tip: Try to compile int * a = new int(); then display *a.
	// int *a = new int();

	// std::cout << *a << std::endl;

	// delete a;

int	main()
{
	Array<int>	intArray(4);

	std::cout << "Element count  = " << intArray.size() << std::endl; 

	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray.getElement() << " | " << i << std::endl;

	return 0;
}
