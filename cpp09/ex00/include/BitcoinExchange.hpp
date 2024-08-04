/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/30 17:45:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/04 21:24:26 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <algorithm>
# include <map>


void	getExchange(char *argv);

// exceptions
class invalidFile : public std::exception
{
	public:
		const char *what() const throw(); 
};

#endif 

