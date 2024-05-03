/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:52:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 22:09:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/WrongCat.hpp"

// default
WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

// copy
WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

// destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

// makeSound() same function but since it's being called by a WrongCat 
// class object, "wrong meow" is printed, if there is no 
// WrongCat class specification of this function, wrongcat->makeSound
// will use the makeSound function from Base class (WrongAnimal)

void	WrongCat::makeSound() const
{
	std::cout << "wrong meow" << std::endl;
}

