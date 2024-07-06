/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 20:11:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/06 20:47:38 by smclacke      ########   odam.nl         */
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


static void	convertChar(const std::string &input, int length)
{
	char	c = 0;
	int		num = 0;
	
	std::cout << "char: ";
	if (length == 1)
	{
		if (isdigit(input[0]))
		{
			num = static_cast<int>(std::stoi(input));
			if (isprint(num))
				std::cout << "'" << c << "'" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		else
		{
			c = input[0];
			std::cout << "'" << c << "'" << std::endl;
		}		
	}
	else
	{
		try
		{
			num = std::stoi(input);
			if (num >= 0 && num <= 127)
			{
				if (isprint(num))
				{
					c = static_cast<char>(num);
					std::cout << "'" << c << "'" << std::endl;
					return ;
				}
				else
					std::cout << "Non displayable" << std::endl;
			}
			else
				std::cout << "impossible" << std::endl;
		}
		catch(std::invalid_argument& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
}


static void	convertInt(const std::string &input, int length)
{
	int		i = 0;

	std::cout << "int: ";
	if (length == 1 && !isdigit(input[0]))
	{
		if (input[0] >= 0 && input[0] <= 127)
		{
			i = input[0];
			std::cout << i << std::endl;
		}	
	}
	else
	{
		try
		{
			i = static_cast<int>(std::stoi(input));
			std::cout << i << std::endl;
		}
		catch(const std::invalid_argument& e)
		{	
			std::cout << "impossible" << std::endl;
		}
	}
}


static void	convertFloat(const std::string &input, int length)
{
	float	f = 0.0f;

	std::cout << "float: ";
	if (length == 1 && !isdigit(input[0]))
	{
		if (input[0] >= 0 && input[0] <= 127)
		{
			f = static_cast<float>(input[0]);
			std::cout << f << ".0f" << std::endl;
		}
	}
	else
	{
		try
		{
			f = static_cast<float>(std::stof(input));
			std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;
		}
		catch(const std::invalid_argument& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
}


static void	convertDouble(const std::string &input, int length)
{
	double	d = 0.0;

	std::cout << "double: ";
	if (length == 1 && !isdigit(input[0]))
	{
		if (input[0] >= 0 && input[0] <= 127)
		{
			d = static_cast<double>(input[0]);
			std::cout << d << ".0" << std::endl;
		}
	}
	else
	{
		try
		{
			d = static_cast<double>(std::stod(input));
			std::cout << std::setprecision(1) << std::fixed << d << std::endl;
		}
		catch(const std::invalid_argument& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
}



void	ScalarConverter::convert(const std::string &input)
{
	int		length = input.length();

	// check valid (simple) - 33! e.g.

	convertChar(input, length);
	convertInt(input, length);
	convertFloat(input, length);
	convertDouble(input, length);
}
