/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 22:05:19 by eugene        #+#    #+#                 */
/*   Updated: 2024/04/14 22:34:22 by eugene        ########   odam.nl         */
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
	}
	return (0);
}
