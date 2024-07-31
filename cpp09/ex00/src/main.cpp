/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:44:29 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 19:59:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Error invalid input" << std::endl;
		return 1;
	}

	try
	{
		getInputFile(argv[1]);
		getDataBase();
		// displayResult();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}

	// test parsing + storing of DB

	return 0;
}


// example of program's use:

// ./btc
// Error: could not open file.

//  ./btc input.txt
// 2011-01-03 => 3 = 0.9
// 2011-01-03 => 2 = 0.6
// 2011-01-03 => 1 = 0.3
// 2011-01-03 => 1.2 = 0.36
// 2011-01-09 => 1 = 0.32
// Error: not a positive number.
// Error: bad input => 2001-42-42
// 2012-01-11 => 1 = 7.1
// Error: too large a number
