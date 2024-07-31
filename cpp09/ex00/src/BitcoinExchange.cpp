/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 15:42:32 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/BitcoinExchange.hpp"

// std::map
// database shizzle

DataBase::DataBase() {};

DataBase::~DataBase() {};

void	DataBase::getDataBase() const
{
	std::ifstream	dataBaseFile("data.csv");
	if (!dataBaseFile.is_open())
		throw DataBase::invalidFile();
}

const char*	DataBase::invalidFile::what() const throw()
{
	return "Error opening file";
}







// data shizzle

// get data file
