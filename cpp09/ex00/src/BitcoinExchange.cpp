/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 16:14:23 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

void	getDataBase()
{
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw invalidFile();
}


void	getDataFile(char *argv)
{
	std::ifstream	inputFile(argv);
	if (!inputFile.is_open())
		throw invalidFile();
}


const char*	invalidFile::what() const throw()
{
	return "Error opening file";
}
