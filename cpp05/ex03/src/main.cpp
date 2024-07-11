/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 23:17:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 17:56:48 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Intern.hpp"

int	main()
{

// ------------------------------------------------------------------

	Intern	john;
	Bureaucrat		Jim("Jim", 2);

	try
	{
		AForm			*form;

		form = john.makeForm("ShrubberyCreation", "Shrubber");

		Jim.signForm(*form);
		Jim.executeForm(*form);

		Bureaucrat		Bob("Bob", 400);

		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
// ------------------------------------------------------------------

// non existent form
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

// Tom didn't sign both forms
	try
	{
		Intern		jane;
		AForm		*form;
		AForm		*form2;
		Bureaucrat	Tom("Tom", 3);

		form = jane.makeForm("PresidentialPardon", "pardy");
		form2 = jane.makeForm("PresidentialPardon", "something");
		
		// Tom.signForm(*form);
		Tom.signForm(*form2);

		Tom.executeForm(*form);
		Tom.executeForm(*form2);

		delete form;
		delete form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
// ------------------------------------------------------------------

		std::cout << std::endl;
		std::cout << std::endl;

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

		std::cout << std::endl;
		
		Bas.signForm(*form2);
		Bas.executeForm(*form2);
		std::cout << *form2;
		delete form;
		delete form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
