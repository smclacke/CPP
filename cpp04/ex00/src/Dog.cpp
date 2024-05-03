/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:22:01 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// default
Dog::Dog()
{
	std::cout << "Dog Default Constructor called" << std::endl;
}

// copy
Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
Dog	&Dog::operator=(const Dog &copy)
{
	// if (this != &copy)
	// {
	// 	this->
	// }
	return *this;
}

// destructor
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}
