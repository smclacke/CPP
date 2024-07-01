/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:16:03 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/01 16:47:26 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ScalarConverter.hpp"

// System scalar conversion refers to cloning a System templatized by one scalar 
// type into an identical System that is templatized by a different scalar type.


// example output

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0


int	main()
{

	std::string	str1 = "string";
	
	int	integer = stoi(str1);

	std::cout << integer << std::endl;
	return (0);
}
