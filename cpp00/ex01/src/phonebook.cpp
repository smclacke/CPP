/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:36:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/19 18:45:58 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook deconstructor called" << std::endl;
	return ;
}
