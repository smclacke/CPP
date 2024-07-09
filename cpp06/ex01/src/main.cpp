/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 21:04:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/09 22:03:46 by smclacke      ########   odam.nl         */
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


/**
 *     Data *d = new Data;
    d->i = 58;
    d->c = 'a';
    
    std::cout << "Original value of Data: " << d << '\n';
    std::cout << "Original value of Data->c: " << d->c << " Data->i: " << d->i << '\n';
    
    std::uintptr_t u = Serializer::serialize(d);
    std::cout << "[serialize]" << '\n';
    //std::cout << "[after serialize] Value of u: " << u << '\n';
    
    Data* new_d = Serializer::deserialize(u);
    std::cout << "[after deserialize] Value of new_Data: " << new_d << '\n';
    std::cout << "[after deserialize] new_Data->c: " << new_d->c << " new_Data->i: " << new_d->i << '\n';

    delete(d);
 * 
 */