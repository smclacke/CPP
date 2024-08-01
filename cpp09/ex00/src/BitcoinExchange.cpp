/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/01 16:50:11 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

// @todo how to give variables to exceptions to print specific bad input
// 		how to global mapsss

// im going on no touching the database for this below todo...
// @todo check - the database should not actually be touched tho right??
// 		only input file... cause checking validity of DB values is different to input + maybe dates...

// @todo check date validity... not checking if feb has 31 days,,,

// !!!!!!!!!!
// @todo - where should i actually throw errors cause when comparison made, 
// give output for each line, if line bad then error.... or add error to map???



// ---------- displayResult ----------//

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

	// EXCEPTIONS NEED TO HAPPEN HERE :( :( :( ))) 	ORRRRRR, add error to map??

	// compare dbMap key to inputMap key.. then multiply the values
	// and display
	// if key (date) not found, use the closest data (lower date not upper one)
}




// ---------- database ----------//

void	getDataBase(std::map<std::string, float> map)
{
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw invalidFile();

	std::string line;
	std::map<std::string, float>::iterator it = map.begin();
	getline(dataBaseFile, line);
	while (getline(dataBaseFile, line))
	{
		try
		{
			std::string dateLine = line.substr(0, 10);
			std::string valueLine = line.substr(11, (line.length() - 11));
			float	value = std::stof(valueLine);

			map.insert(it, {dateLine, value});
			++it;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	// print map
	// for (auto it = map.begin(); it != map.end(); ++it)
	// 	std::cout << "key  = " << it->first << " => value =  " << it->second << std::endl;
	
	dataBaseFile.close();
}


// ---------- input data ----------//

void	getInputFile(char *argv, std::map<std::string, float> map)
{
	std::string		input = argv;
	if (input.substr(input.find_last_of(".") + 1) != "csv")
		throw invalidFile();

	std::ifstream	inputFile(argv);
	if (!inputFile.is_open())
		throw invalidFile();

	std::string	line;
	std::map<std::string, float>::iterator it = map.begin();
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		try
		{
			if (!checkLine(line))
				continue ;
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
			validValue(value);
			map.insert(it, {dateLine, value});
			++it;
			
			
			// compare + display...

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	// print map
	// for (auto it = map.begin(); it != map.end(); ++it)
	// std::cout << "key  = " << it->first << " => value =  " << it->second << std::endl;
	
	inputFile.close();
}



// parsing utils

bool	checkLine(std::string line)
{
	if (line.empty())
		return false;
	if (line.find_first_not_of(' ') == std::string::npos)
		return false;
	if (line.find_first_not_of('\t') == std::string::npos)
		return false;
	return true;	
}

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


void	validValue(float value)
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

