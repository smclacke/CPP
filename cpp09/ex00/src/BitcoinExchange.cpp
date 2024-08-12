/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 16:46:26 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

// parsing utils

static bool	checkLine(std::string line)
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

static bool	validDate(std::string line)
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
	
	if (yearNum > 2024 || yearNum < 1000 || monthNum > 12 || dayNum > 31)
		return false;

	return true;
}


static bool	validValue(std::string line)
{
	float value;
	try
	{
		value = std::stof(line);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	
	return true;
}


// exceptions

const char*	invalidFile::what() const throw()
{
	return "Error: could not open file.";
}


// ---------- displayResult ----------//

// std::map  - Lookup
// find: finds element with specific key
// lower_bound: returns an iterator to the first element not less than the given key
// upper_bound: returns an iterator to the first element greater than the given key

static void	displayResult(std::map<std::string, float> &map, std::string dateLine, float value)
{
	std::map<std::string, float>::iterator	it;

	it = map.find(dateLine);
	if (it == map.end())
	{
		it = map.lower_bound(dateLine);
		if (it != map.begin())
			it--;
	}

	float		num = it->second;
	float		result = num * value;

	std::cout << result << std::endl;

}


// ---------- database ----------//

static void	getDataBase(std::map<std::string, float> &map)
{
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw invalidFile();

	typedef std::map<std::string, float>::const_iterator it;
	it mapIt = map.begin();
	
	std::string line;
	getline(dataBaseFile, line);
	while (getline(dataBaseFile, line))
	{
		try
		{
			std::string dateLine = line.substr(0, 10);
			std::string valueLine = line.substr(11, (line.length() - 11));
			
			float value;
			try
			{
				value = std::stof(valueLine);
			}
			catch(const std::out_of_range& e)
			{
				return ;
			}

			map.insert(mapIt, {dateLine, value});
			++mapIt;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	dataBaseFile.close();
}


// ---------- input data ----------//

void	getExchange(char *argv)
{
	std::string		input = argv;
	if (input.substr(input.find_last_of(".") + 1) != "csv")
		throw invalidFile();

	std::ifstream	inputFile(argv);
	if (!inputFile.is_open())
		throw invalidFile();
		
	float	value;
	std::map<std::string, float>	dbMap;

	std::string	line;
	getline(inputFile, line);
	while (getline(inputFile, line))
	{
		if (!checkLine(line))
			continue ;

		std::string dateLine = line.substr(0, 10);
		if (!validDate(dateLine))
		{
			std::cout << "Error: bad input => " << dateLine << std::endl;
			continue ;
		}

		std::string	valueLine = line.substr(13);
		if (!validValue(valueLine))
			continue ;

		try
		{
			value = std::stof(valueLine);
		}
		catch(const std::out_of_range& e)
		{
			return ;
		}
		
		getDataBase(dbMap);
		std::cout << dateLine << " => " << valueLine << " = ";

		displayResult(dbMap, dateLine, value);
	}
	inputFile.close();
}

