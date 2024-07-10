/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 21:03:51 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/10 14:51:01 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Serializer.hpp"

// default
Serializer::Serializer() {}

// copy constructor
Serializer::Serializer( const Serializer &copy)
{
	*this = copy;
}

// copy assignment operator
Serializer	&Serializer::operator=(const Serializer &copy)
{
	if (this != &copy)
		(void) copy;
	return *this;
}

// destructor
Serializer::~Serializer() {}


// static member funcs

// It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

// It takes an unsigned integer parameter and converts it to a pointer to Data
Data	*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

