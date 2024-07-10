/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 21:04:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/10 15:22:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Serializer.hpp"

int	main()
{
	Data	*ptr = new Data;
		
	ptr->c = 's';
	ptr->i = 42;
	std::cout << "OG data = " << ptr << " | " << ptr->c << " | " << ptr->i << std::endl;
	
	std::cout << std::endl;

	std::uintptr_t p = Serializer::serialize(ptr);
	std::cout << "Serialized = " << p << std::endl;

	ptr = Serializer::deserialize(p);
	std::cout << "Deserialized = " << ptr << std::endl;

	std::cout << std::endl;

/////////////////////////////////////////////////////////////////////////

	Data	*ptr_2 = new Data;

	ptr_2->c = 'A';
	ptr_2->i = 111;
	std::cout << "OG data = " << ptr_2 << " | " << ptr_2->c << " | " << ptr_2->i << std::endl;

	std::cout << std::endl;

	ptr_2 = Serializer::deserialize(Serializer::serialize(ptr_2));
	std::cout << "seralize->deseralize ptr_3 = " << ptr_2 << std::endl;

	delete ptr;
	delete ptr_2;

	return 0;
}

