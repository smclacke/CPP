/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 21:01:05 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/06 21:03:44 by smclacke      ########   odam.nl         */
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



#endif
