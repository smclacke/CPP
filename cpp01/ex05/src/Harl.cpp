/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 22:05:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:24:57 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::_debug()
{
	std::cout << "I love having extra cheese on my 7XL-double-cheese-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info()
{
	std::cout << "I cannot believe adding extra cheese costs more money." << std::endl;
}

void	Harl::_warning()
{
	std::cout << "I think I deserve to have some extra cheese for free." << std::endl;
}

void	Harl::_error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
