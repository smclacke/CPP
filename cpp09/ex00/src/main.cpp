/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:44:29 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 16:13:39 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

// If the date used in the input does not exist in your DB then you
// must use the closest date contained in your DB. Be careful to use the
// lower date and not the upper one.

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Error invalid input" << std::endl;
		return 1;
	}
	
	// parse + store DB info in std::map
	try
	{
		getDataFile(argv[1]);
		getDataBase();
		// parse
		// store
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}

	try
	{
		// ... parse input + find needed info from DB
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	
	// getDataFile
	// get arg file, (e.g. input.txt), extract necessary data from DB based on 
	// input given to program (input.txt)


	// display on standard output the result of the value multipled by the
	// exchange rate according to the date indicated in your database

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
