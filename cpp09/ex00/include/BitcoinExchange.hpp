/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/02 14:43:42 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <algorithm>
# include <map>


void	getDataBase(std::map<std::string, float> map);
void	getInputFile(char *argv, std::map<std::string, float> map);
void	displayResult(std::map<std::string, float> inputMap, std::map<std::string, float> dbMap);


// parsing utils
bool	checkLine(std::string line);
bool	validDate(std::string line);
bool	validValue(std::string line);


// exceptions
class invalidFile : public std::exception
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

