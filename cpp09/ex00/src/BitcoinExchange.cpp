/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/01 15:56:15 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

// @todo how to give variables to exceptions to print specific bad input
// 		how to global mapsss

// @todo check - the database should not actually be touched tho right??
// 		only input file... cause checking validity of DB values is different to input + maybe dates...

// @todo check date validity... not checking if feb has 31 days,,,


// ---------- input data ----------//

void	getInputFile(char *argv, std::map<std::string, float> map)
{
	(void) map;
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
			std::string dateLine = line.substr(0, 10);
			if (!validDate(dateLine))
				throw invalidValue();
			std::string	valueLine = line.substr(13, (line.length() - 13));
			float	value;
			try
			{
				value = std::stof(valueLine);
			}
			catch(const std::exception& e)
			{
				throw invalidValue();
				return ;
			}
			validInputValue(value);

			// map.insert(dateLine, value);

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	inputFile.close();
}


// ---------- database ----------//

void	getDataBase(std::map<std::string, float> map)
{
	(void) map; //////
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw invalidFile();

	std::string line;
	getline(dataBaseFile, line);
	while (getline(dataBaseFile, line))
	{
		try
		{
			std::string dateLine = line.substr(0, 10);
			if (!validDate(dateLine))
				throw invalidValue();
			std::string valueLine = line.substr(11, (line.length() - 11));
			float	value;
			try
			{
				value = std::stof(valueLine);
			}
			catch(const std::exception& e)
			{
				throw invalidValue();
				return ;
			}
			// validValue(valueLine); ??

			// add dateLine + valueLine to map, then while loop...
			// map.
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
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
	for (size_t i = 0; i < line.length(); i++)
	{
		if (line.length() != 10 || (!std::isdigit(line[i]) && !isDash(line[i])))
			return false;
	}
	
	std::string year = line.substr(0, 4);
	std::string month = line.substr(5, 2);
	std::string day = line.substr(8, 2);

	float	yearNum;
	float	monthNum;
	float	dayNum;
	
	try
	{
		yearNum = std::stof(year);
		monthNum = std::stof(month);
		dayNum = std::stof(day);
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


// db values are a bit different
void	validInputValue(float value)
{
	try
	{
		if (value < 0)
			throw invalidNegative();

		if (value > 1000)
			throw invalidTooLarge();
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
}



//  std::map  - Lookup
// count: returns the number of elements matching specific key

// find: finds element with specific key

// contains: checks if the container contains element with specific key

// equal_range: returns range of elements matching a specific key

// lower_bound: returns an iterator to the first element not less than the given key

// upper_bound: returns an iterator to the first element greater than the given key

void	displayResult(std::map<std::string, float> inputMap, std::map<std::string, float> dbMap)
{
	std::cout << "results are being processed..." << std::endl;

	(void) inputMap;
	(void) dbMap;
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

