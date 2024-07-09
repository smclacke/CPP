/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 21:04:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/09 22:05:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Serializer.hpp"

int	main()
{

	Data	*ptr = new Data;
		
	ptr->c = 's';
	ptr->i = 42;
	std::cout << "OG data = " << ptr << " | " << ptr->c << " | " << ptr->i << std::endl;
	

	std::uintptr_t p = Serializer::serialize(ptr);
	std::cout << "Serialized = " << p << std::endl;


	Data	*ptr_2 = Serializer::deserialize(p);
	std::cout << "Deserialized = " << ptr_2 << std::endl;

	delete ptr;

	return (0);
}

