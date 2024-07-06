/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/30 00:14:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/06 21:06:31 by smclacke      ########   odam.nl         */
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

	public:
		static void	convert(const std::string &input); 
	
};


// You must create a non-empty
// (it means it has data members) Data structure


// Use serialize() on the address of the Data object 
// and pass its return value to deserialize().

// Then, ensure the return value of deserialize() 
// compares equal to the original pointer.

// Do not forget to turn in the files of your Data structure.

#endif

