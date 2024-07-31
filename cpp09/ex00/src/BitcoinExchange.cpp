/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 19:28:33 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

// @todo (unlike jisse) check date vadility + value in both DB and input
// @todo how to give variables to exceptions to print specific bad input


// ---------- input data ----------//

void	getInputFile(char *argv)
{
	std::string		input = argv;
	
	if (input.substr(input.find_last_of(".") + 1) != "csv")
		throw invalidFile();

	std::ifstream	inputFile(argv);
	if (!inputFile.is_open())
		throw invalidFile();

	std::string	line;
	getline(inputFile, line);		// skip first line
	while (getline(inputFile, line))
	{
		validate
		if (!validDate(line))
			throw invalidValue();

		validValue(line, ' '); // you need to throw
		
		// try
		// {
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }

		
		// add to map
		// ::inputMap;

	}
	inputFile.close();
}


// ---------- database ----------//

void	getDataBase()
{
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw invalidFile();


	// std::string line;
	// getline(dataBaseFile, line);		// skips first line
	// while (getline(dataBaseFile, line))
	// {
			// validate
			// if (!validDate(line))
			// 	throw invalidValue();
			
			// validValue(line, ','); // throws it's own exceptions like above


			// add to map
			// ::dbMap
	// }
	dataBaseFile.close();
}



// parsing utils

// valid date
// bool	validDate(std::string line)
// {
// 	// 2009-03-23
// 	// year-month-day
// 	// if first 4 not digits...
// 	// if first 4 as digit more than 2024
// 	// if fifth and eighth not dash
// 	// is six and seven more than 12
// 	// if nine and ten more than 31
// }



void	validValue(std::string line, int delim)
{

	// if delim not in line (date without anything else)
		// error

	// if delim is space, substr space pipe space ... ??

	// if delim comma, skip directly to next char
	

	// this is a big pile of poo but yeah...
	std::cout << line << std::endl;
	std::string	value = line.substr(line.find_first_of("|") + 2);

	// std::cout << value << std::endl;
	
	// int	len = value.length();
	
	// for (int i = 0; i < len; i++)
	// {
	// 	if (!std::isdigit(value[i]) && !isdot(value[i]) && !std::isspace(value[i]))
	// 	{
	// 		if (value[i] == '-')
	// 		{
	// 			throw invalidNegative();
	// 			return ;
	// 		}
	// 		else
	// 		{
	// 			throw invalidValue();
	// 			return ;
	// 		}
	// 	}
	// }
	
	

	
	// if num not numming
	// error

	// if num > (?) || < (?)
	// throw invalidTooLarge();

	// if num is negative...
	// throw invalidNegative();
	
}



//  std::map  - Lookup
// count: returns the number of elements matching specific key

// find: finds element with specific key

// contains: checks if the container contains element with specific key

// equal_range: returns range of elements matching a specific key

// lower_bound: returns an iterator to the first element not less than the given key

// upper_bound: returns an iterator to the first element greater than the given key

void	displayResult()
{
	std::cout << "results are being processed..." << std::endl;
	// compare dbMap key to inputMap key.. then multiply the values
	// and display
	// if key (date) not found, use the closest data (lower date not upper one)
}




// exceptions

const char*	invalidFile::what() const throw()
{
	return "Error: could not open file";
}

const char*	invalidValue::what() const throw()
{
	return "Error: bad input => "; // get + add the bad input
}

const char*	invalidNegative::what() const throw()
{
	return "Error: not a positive number";
}

const char*	invalidTooLarge::what() const throw()
{
	return "Error: too large a number";
}

