/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:21:14 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// default
Cat::Cat()
{
	std::cout << "Cat Default Constructor called" << std::endl;
}

// copy
Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
Cat	&Cat::operator=(const Cat &copy)
{
	// if (this != &copy)
	// {
	// 	this->
	// }
	return *this;
}

// destructor
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}
