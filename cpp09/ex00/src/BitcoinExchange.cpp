/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 18:34:14 by smclacke      ########   odam.nl         */
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

	// skip first line !
	std::string	line;
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		// validate
		if (!validDate(line))
			throw invalidValue ();
		try
		{
			validValue(line); // let it throw correct error from func
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		// add to map
		// ::inputMap;

		std::cout << line << std::endl;
	}
}


// ---------- database ----------//

void	getDataBase()
{
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw invalidFile();

	
	// ::dbMap
	// parse + store database here
	// getline ... stringstream etc

	// skip first line !
	// std::string line;
	// getline(dataBaseFile, line);
	// while (getline(dataBaseFile, line))
	// {
	// 	...
	// }
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



// parsing utils

// valid date
bool	validDate(std::string line)
{
	
}

// valid value
void	validValue(std::string line)
{
	// throw invalidNegative();
	// throw invalidTooLarge();
	
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

