/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 21:13:33 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 12:15:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

void	PhoneBook::msg()
{
	std::cout << "\n\t	*** TOTALLY RADICAL PHONEBOOK ***" << std::endl << std::endl;
	std::cout << "\tCommand options include: ADD | SEARCH | EXIT" << std::endl;
}

void	PhoneBook::errorMsg()
{
	std::cout << "\n\t		ERROR!" << std::endl;
	std::cout << "\tCommand options include: ADD | SEARCH | EXIT" << std::endl;
}
