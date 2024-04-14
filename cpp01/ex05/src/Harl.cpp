/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 22:05:00 by eugene        #+#    #+#                 */
/*   Updated: 2024/04/14 22:41:15 by eugene        ########   odam.nl         */
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
	std::cout << "some semi-rejecting and quite insulting error notice" << std::endl;
}

// array of member function pointers + array of level strings
// check level to string, call matching
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
