/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:15:51 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/04 22:22:07 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}


ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
	{
		(void) copy;
	}
	return *this;
}

ScalarConverter::~ScalarConverter() {}

// or use size() instead of length()
// check for quotes??? cause works with and without, but then no diff??
static void	convertChar(const std::string &input)
{
	char	c;
	int		length = input.length();
	
	if (length > 0)
	{
		if (length == 1)
		{
			c = input[0];
			if (isprint(c)) // and is char ( 0 nono, '0' ouioui)
			{
				std::cout << "char: '" << c << "'" << std::endl;
				return ;
			}
		}
		// else
	}
}

//static void	convertInt(const std::string &input);
// stoi

//static void	convertFloat(const std::string &input);
// stof

//static void	convertDouble(const std::string &input);
// stod

void	ScalarConverter::convert(const std::string &input)
{
	convertChar(input);
	// convertInt(input);
	// convertFloat(input);
	// convertDouble(input);
}
