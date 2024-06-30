/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 23:17:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 16:48:46 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Intern.hpp"

int	main()
{

// ------------------------------------------------------------------

	Intern	john; // no throw in constructor so can be outside block

	try
	{
		AForm	*form; // throw in constructor so must be in block

		form = john.makeForm("Shrub", "Shrubber");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
// ------------------------------------------------------------------

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
	
	std::cout << std::endl;

// ------------------------------------------------------------------

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

	std::cout << std::endl;
	
// ------------------------------------------------------------------

	try
	{
		Intern		jane;
		AForm		*form;

		Bureaucrat	Bas("Bas", 1);
		std::cout << Bas;

		form = jane.makeForm("Robo", "robotica");
		std::cout << *form;
	
		Bas.signForm(*form);
		Bas.executeForm(*form);
		std::cout << *form;
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	return (0);
}
