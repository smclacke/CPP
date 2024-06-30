/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 23:17:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 20:10:30 by smclacke      ########   odam.nl         */
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

		form = john.makeForm("ShrubberyCreation", "Shrubber");
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

		form = jane.makeForm("PresidentialPardon", "pardy");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
// ------------------------------------------------------------------

	Bureaucrat defau;

	try
	{
		Intern		jane;
		AForm		*form;
		AForm		*form2;

		Bureaucrat	Bas("Bas", 1);
		std::cout << Bas;

		std::cout << std::endl;

		form = jane.makeForm("RobotomyRequest", "robotica");
		std::cout << *form;
		form2 = jane.makeForm("PresidentialPardon", "excuse you");
		std::cout << *form2;
	
		std::cout << std::endl;
		
		Bas.signForm(*form);
		Bas.executeForm(*form);
		std::cout << *form;
		delete form;
		delete form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
