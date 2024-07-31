/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 19:20:02 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <algorithm>
# include <map>


// std::map<std::string, float>	dbMap;
// std::map<std::string, float>	inputMap;


void	getInputFile(char *argv);
void	getDataBase();
void	displayResult();


// parsing utils
bool	validDate(std::string line);
void	validValue(std::string line, int delim);


// exceptions
class invalidFile : public std::exception
{
	public:
		const char *what() const throw(); 
};

// how to pass var here for which input is bad?
class invalidValue : public std::exception
{
	public:
		const char *what() const throw();
};

class invalidNegative : public std::exception
{
	public:
		const char *what() const throw(); 
};

class invalidTooLarge : public std::exception
{
	public:
		const char *what() const throw(); 
};


// test parsing + storage


#endif 

