/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/01 15:53:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <algorithm>
# include <map>


void	getInputFile(char *argv, std::map<std::string, float> map);
void	getDataBase(std::map<std::string, float> map);
void	displayResult(std::map<std::string, float> inputMap, std::map<std::string, float> dbMap);


// parsing utils
bool	validDate(std::string line);
void	validInputValue(float value);


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


#endif 

