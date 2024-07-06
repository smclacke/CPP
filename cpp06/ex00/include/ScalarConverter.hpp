/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:14:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/06 18:33:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <cctype>
# include <stdexcept>
# include <cmath>
# include <string>

class ScalarConverter
{

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &copy);
		~ScalarConverter();

		enum	type_t
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			IMPOSSIBLE,
			NONDISPLAY,
			INF,
			N_A_N,
			NEG
		};

		static type_t	checkType(const std::string &input);
		static int		getLength(const std::string &input);


	public:
		static void	convert(const std::string &input); 
	
};


#endif

