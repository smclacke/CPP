/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:15:51 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 15:46:21 by smclacke      ########   odam.nl         */
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


static bool	validInput(const std::string &input)
{
	int		length = input.length();

	if (input[0] == '-')
	{
		std::string str = input.substr(1);
		return validInput(str);
	}
	else if (input.find('.') != std::string::npos)
	{	
		if (input[0] == '.' || input[length] == '.')
			return false;
		for (int i = 0; i < length; i++)
		{
			if (input[i] == '.')
			{
				if (input[i + 1] == 'f' || !isprint(input[i + 1]))
					return false;
			}
			for (int j = 0; input[j] != '.'; j++)
			{
				if (!isdigit(input[j]))
					return false;
			}
			if (input.back() == 'f')
			{
				for (int	k = (input.find('.') + 1); k < (length - 1); k++)
				{
					if (!isdigit(input[k]))
						return false;
				}
			}
			else if (input.back() != 'f')
			{
				for (int	k = (input.find('.') + 1); k < length; k++)
				{
					if (!isdigit(input[k]))
						return false;
				}
			}
			else
				return false;
		}
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			if (!isdigit(input[i]))
				return false;
		}
	}
	return true;
}


static void	convertChar(const std::string &input)
{
	char	c = 0;
	int		length = input.length();
	
	std::cout << "char: ";
	if (length > 0)
	{
		int		num = 0;
		if (length == 1)
		{
			if (isdigit(input[0]))
			{
				num = std::stoi(input);
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
			if (validInput(input))
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
						}
						else
							std::cout << "Non displayable" << std::endl;
					}
					else
						std::cout << "impossible" << std::endl;
					
				}
				catch(std::out_of_range& e)
				{
					std::cout << "impossible" << std::endl;
				}
			}
		}
	}
	else
		std::cout << "impossible" << std::endl;
}


static void	convertInt(const std::string &input)
{
	int	i = 0;

	std::cout << "int: ";
	if (validInput(input))
	{
		try
		{
			i = static_cast<int>(std::stoi(input));
			std::cout << i << std::endl;
		}
		catch(const std::out_of_range& e)
		{	
			std::cout << "impossible" << std::endl;
		}
	}
	else
		std::cout << "impossible" << std::endl;	
}


static void	convertFloat(const std::string &input)
{
	float	f = 0.0f;

	std::cout << "float: ";
	if (validInput(input))
	{
		try
		{
			f = static_cast<float>(std::stof(input));
			std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;
		}
		catch(const std::out_of_range& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	else
		std::cout << "impossible" << std::endl;
}

static void	convertDouble(const std::string &input)
{
	double	d = 0.0;


	std::cout << "double: ";
	if (validInput(input))
	{
		try
		{
			d = static_cast<double>(std::stod(input));
			std::cout << std::setprecision(1) << std::fixed << d << std::endl;
		}
		catch(const std::out_of_range& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	else
		std::cout << "impossible" << std::endl;
}


void	ScalarConverter::convert(const std::string &input)
{
	convertChar(input);
	convertInt(input);
	convertFloat(input);
	convertDouble(input);
}
