/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 22:05:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:25:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::_debug()
{
	std::cout << "some semi-interesting debug message" << std::endl;
}

void	Harl::_info()
{
	std::cout << "some semi-informative information about something or other" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "some semi-alarming warning noise that's ultimately very annoying" << std::endl;
}

void	Harl::_error()
{
	std::cout << "some semi-offensive and quite insulting error notice" << std::endl;
}

void	Harl::complain(std::string level)
{
	void			(Harl::*pointer[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string		levelString[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levelString[i] == level)
			(this->*pointer[i])();
	}
}

int		getArg(std::string argv)
{
	
	std::string		levelString[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = -1; i < 4; ++i)
	{
		if (levelString[i] == argv)
			return (i);
	}
	return (-1);
}

void	harlFilter(std::string argv, Harl harley)
{
	int		arg = getArg(argv);	
	
	switch (arg)
	{
		case 0:
			harley.complain("DEBUG");
			harley.complain("INFO");
			harley.complain("WARNING");
			harley.complain("ERROR");
			break ;
		case 1:
			harley.complain("INFO");
			harley.complain("WARNING");
			harley.complain("ERROR");
			break ;
		case 2:
			harley.complain("WARNING");
			harley.complain("ERROR");
			break ;
		case 3:
			harley.complain("ERROR");
			break ;
	}
}
