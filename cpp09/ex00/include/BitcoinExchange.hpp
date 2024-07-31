/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 15:42:17 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <algorithm>
// # include <stack>
// # include <deque>
// # include <forward_list>
// # include <vector>
// # include <array>
// # include <list>
# include <map>

// class for database
// an instance of this dataBase class is basically a table of dates and prices for 
// the bitcoin currency

class DataBase
{
	private:
		// std::map<std::string, float>	_parsedDB;

	public:
		DataBase();
		// DataBase(std::string rawDB);
		~DataBase();

	// methods
	void	getDataBase() const;

	// exceptions
	class invalidFile : public std::exception
	{
		public:
			const char *what() const throw(); 
	};
	
};



// class for data


#endif 

