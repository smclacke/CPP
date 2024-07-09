/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 21:01:05 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/09 20:21:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer	&operator=(const Serializer &copy);
		~Serializer();

	public:
		static uintptr_t	serialize(Data * ptr);
		static Data			*deserialize(uintptr_t raw);
		
	
};



// You must create a non-empty
// (it means it has data members) Data structure


// Use serialize() on the address of the Data object 
// and pass its return value to deserialize().

// Then, ensure the return value of deserialize() 
// compares equal to the original pointer.

// Do not forget to turn in the files of your Data structure.


#endif
