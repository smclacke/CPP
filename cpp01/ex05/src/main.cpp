/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 22:05:19 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:25:01 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harley;

	std::string	debug = "DEBUG";
	std::string	info = "INFO";
	std::string	warning = "WARNING";
	std::string	error = "ERROR";
	if (argc == 2)
	{
		if (debug.compare(argv[1]) == 0 || info.compare(argv[1]) == 0
			|| warning.compare(argv[1]) == 0 || error.compare(argv[1]) == 0)
			harley.complain(argv[1]);
		else
		{
			std::cout << "DEBUG as default" << std::endl;
			harley.complain("DEBUG");
		}
			
	}
	else if (argc == 1)
	{
		std::cout << "DEBUG as default" << std::endl;
		harley.complain("DEBUG");
	}
	else
	{
		std::cout << "ALL TOGETHER NOW" << std::endl;
		harley.complain("DEBUG");
		harley.complain("INFO");
		harley.complain("WARNING");
		harley.complain("ERROR");
	}
	return (0);
}
