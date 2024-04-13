/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 01:29:27 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include <iomanip>

// string = "HI THIS IS BRAIN"
// stringPTR = pointer to string
// stringREF = reference to string

/**
 * print:
 * 
 * memory address of string variable
 * memory address held by stringPTR
 * memory address helf by stringREF
 * 
 * value of string
 * value pointed to by stringPTR
 * value pointed to by stringREF
 */

int	main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "Memory address of string	= " << &string << std::endl;
	std::cout << "Memory address of stringPTR	= " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF	= " << &stringREF << std::endl << std::endl;

	std::cout << "Value of string		= " << string << std::endl;
	std::cout << "Value of stringPTR	= " << *stringPTR << std::endl;
	std::cout << "Value of stringREF	= " << stringREF << std::endl <<  std::endl;

}
