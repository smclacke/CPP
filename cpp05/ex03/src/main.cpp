/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 23:17:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 00:03:20 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Intern.hpp"

int	main()
{
	
	try
	{
		Intern	john;
		AForm	*form;

		form = john.makeForm("Shrub", "Shrubber");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	try
	{
		Intern	jane;
		AForm	*form;

		form = jane.makeForm("something wrong", "pardy");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	try
	{
		Intern	jane;
		AForm	*form;

		form = jane.makeForm("Pardon", "pardy");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	try
	{
		Intern	jane;
		AForm	*form;

		form = jane.makeForm("Robo", "robotica");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	return (0);
}
