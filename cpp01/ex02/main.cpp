/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/15 13:12:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include <iomanip>

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


// ----------------------------------------------------//
		// extra 

	// int	x = 20;
	// int	*xPTR = &x;
	// int	&xREF = x;

	
	// std::cout << std::endl << "x = 20" << std::endl;
	// std::cout << "addresses" << std::endl;

	// std::cout << "x = " << &x << std::endl;
	// std::cout << "xPTR = " << xPTR << std::endl;
	// std::cout << "xREF = " << &xREF << std::endl;

	// std::cout << std::endl << "values" << std::endl;
	
	// std::cout << "x = " << x << std::endl;
	// std::cout << "xPTR = " << *xPTR << std::endl;
	// std::cout << "xREF = " << xREF << std::endl;

	
	// std::cout << "--------------------------" << std::endl;
	
	// x = 50;

	// std::cout << std::endl << "x = 50" << std::endl;
	// std::cout << "addresses" << std::endl;
	
	// std::cout << "x = " << &x << std::endl;
	// std::cout << "xPTR = " << xPTR << std::endl;
	// std::cout << "xREF = " << &xREF << std::endl;

	// std::cout << std::endl << "values" << std::endl;
	
	// std::cout << "x = " << x << std::endl;
	// std::cout << "xPTR = " << *xPTR << std::endl;
	// std::cout << "xREF = " << xREF << std::endl;
	
}
