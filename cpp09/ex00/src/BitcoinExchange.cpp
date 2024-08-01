/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/01 13:48:36 by smclacke      ########   odam.nl         */
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
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		try
		{
			if (!validDate(line))
				throw invalidValue();
			std::cout << line << std::endl;
			// validValue(line, ' '); // needs to come back with it's throw..
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		
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

// create date + value vars here, check them then add to map!!

	std::string line;
	getline(dataBaseFile, line);
	while (getline(dataBaseFile, line))
	{
		try
		{
			if (!validDate(line))
				throw invalidValue();
			// validValue(line, ','); // throws it's own exceptions like above
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		// add to map
		// ::dbMap;
	}
	dataBaseFile.close();
}



// parsing utils

static int	isDash(int c)
{
	return c == '-';
}

bool	validDate(std::string line)
{
	line = line.substr(0, 10);

	for (size_t i = 0; i < line.length(); i++)
	{
		if (line.length() != 10 || (!std::isdigit(line[i]) && !isDash(line[i])))
			return false;
	}
	
	std::string year = line.substr(0, 4);
	std::string month = line.substr(5, 2);
	std::string day = line.substr(8, 2);

	int	yearNum;
	int	monthNum;
	int	dayNum;
	
	try
	{
		yearNum = std::stoi(year);
		monthNum = std::stoi(month);
		dayNum = std::stoi(day);
	}
	catch(const std::out_of_range& e)
	{
		return false;
	}
	
	// doesnt specify in pdf date range...
	// need to check if feb that no 30 days? .... 
	if (yearNum > 2024 || yearNum < 1000)
		return false;
	if (monthNum > 12)
		return false;
	if (dayNum > 31)
		return false;

	return true;
}

// void	validValue(std::string line, int delim)
// {

	// if delim not in line (date without anything else)
		// error

	// if delim is space, substr space pipe space ... ??

	// if delim comma, skip directly to next char
	

	// std::cout << line << delim << std::endl;
	// std::string	value = line.substr(line.find_first_of("|") + 2);

	
	// if num not numming
	// error

	// if num > (?) || < (?)
	// throw invalidTooLarge();

	// if num is negative...
	// throw invalidNegative();
	
	// add here to map
// }



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

