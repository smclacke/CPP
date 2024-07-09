/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:14:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/09 21:29:47 by smclacke      ########   odam.nl         */
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
	IMPOSSIBLE,
	NONDISPLAY,
	INF,
	N_A_N,
	NEG,
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

