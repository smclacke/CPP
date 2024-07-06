/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:16:03 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/06 20:48:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ScalarConverter.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: program takes one argument as input" << std::endl;
		return (1);
	}

	ScalarConverter::convert(argv[1]);
	
	return (0);
}


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
