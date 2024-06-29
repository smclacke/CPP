/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:15:51 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 00:32:48 by smclacke      ########   odam.nl         */
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


// char
// •int
// •float
// •double

static void	convert(const std::string &input)
{

	// check for non-printable

}
