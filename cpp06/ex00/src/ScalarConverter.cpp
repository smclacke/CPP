/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/06 20:11:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/10/21 18:45:27 by smclacke      ########   odam.nl         */
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


static bool	isFloatNanOrInf(const std::string &input)
{
	if (input == "-inff" || input == "+inff" || input == "inff" || input == "nanf")
		return true;
	return false;
}

static bool	isDoubleNanOrInf(const std::string &input)
{
	if (input == "-inf" || input == "+inf" || input == "inf" || input == "nan")
		return true;
	return false;
}


static void	impossible(const char *type)
{
	if (type == NULL)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
		std::cout << type << ": impossible" << std::endl;
}


static void	convertChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}


static void	convertInt(const std::string &input)
{
	int		num = 0;

	try
	{
		num = std::stoi(input);
	}
	catch(const std::out_of_range& e)
	{
		impossible(NULL);
		return ;
	}

	if (num >= 32 && num <= 126)
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
	
}

static void	convertFloat(const std::string &input)
{
	float	f = 0.0f;

	try
	{
		f = std::stof(input);
	}
	catch(const std::out_of_range& e)
	{
		impossible(NULL);
		return ;
	}

	if (f >= 32 && f <= 126)
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else if (isFloatNanOrInf(input))
		impossible("char");
	else
		std::cout << "char: Non displayable" << std::endl;

	if (static_cast<int>(f) < std::numeric_limits<int>::max() && static_cast<int>(f) > std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		impossible("int");

	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;

	if ((static_cast<double>(f) < std::numeric_limits<double>::max() && static_cast<double>(f) > std::numeric_limits<double>::lowest()) || isFloatNanOrInf(input))
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(f) << std::endl;
	else
		impossible("double");
}

static void	convertDouble(const std::string &input)
{
	double	d = 0.0;

	try
	{
		d = std::stod(input);
	}
	catch(const std::out_of_range& e)
	{
		impossible(NULL);
		return ;
	}

	if (d >= 32 && d <= 126)
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else if (isDoubleNanOrInf(input))
		impossible("char");
	else
		std::cout << "char: Non displayable" << std::endl;

	if (static_cast<int>(d) < std::numeric_limits<int>::max() && static_cast<int>(d) > std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		impossible("int");
	
	if ((static_cast<float>(d) < std::numeric_limits<float>::max() && static_cast<float>(d) > std::numeric_limits<float>::lowest()) || isDoubleNanOrInf(input))
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(d) << "f" << std::endl;
	else
		impossible("float");

	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}


static type_t	validInput(const std::string &input, const char *str, int length)
{
	int		i = 0;
	type_t	type = UNKNOWN;

	if (length == 1 && !isdigit(str[0]))
		return CHAR;
	if (isFloatNanOrInf(input))
		return FLOAT;
	if (isDoubleNanOrInf(input))
		return DOUBLE;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] == '.' && isdigit(str[i + 1]))
	{
		type = DOUBLE;
		i++;
	}
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] == 'f')
	{
		type = FLOAT;
		i++;
	}
	if (i == length)
	{
		if (type != UNKNOWN)
			return type;
		else
			return INT;
	}
	return UNKNOWN;
}


void	ScalarConverter::convert(const std::string &input)
{
	int			length = input.length();
	const char	*str = input.c_str();
	type_t		type;

	type = validInput(input, str, length);

	switch (type)
	{
		case CHAR:
			convertChar(str[0]);
			break ;
		
		case INT:
			convertInt(input);
			break ;

		case FLOAT:
			convertFloat(input);
			break ;
	
		case DOUBLE:
			convertDouble(input);
			break ;

		default:
			std::cout << "Invalid input.. try again" << std::endl;
	}
}
