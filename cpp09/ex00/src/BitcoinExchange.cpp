/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 15:36:19 by smclacke      ########   odam.nl         */
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
		throw DataBase::invalidDataBase();
}

const char*	DataBase::invalidDataBase::what() const throw()
{
	return "Error opening data base file";
}







// data shizzle
