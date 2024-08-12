/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:53:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 16:30:29 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/RPN.hpp"

// e.g.: 

//  ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 	42
//  ./RPN "7 7 * 7 -"
// 	42
//  ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 	0
//  ./RPN "(1 + 1)"
// 	Error

	// input numbers always less than 10
	// must handle operations: + - / *

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return 1;
	}
	try
	{
		std::string	str = argv[1];
		resultRNP(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}

