/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:14:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/10 16:28:35 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <iomanip>
# include <limits>
# include <sstream>
# include <cstdio>

enum type_t
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &copy);
		~ScalarConverter();

	public:
		static void	convert(const std::string &input); 
	
};

#endif

