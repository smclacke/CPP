/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 20:54:30 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 00:01:29 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AForm.hpp"
# include "../include/ShrubberyCreationForm.hpp"
# include "../include/RobotomyRequestForm.hpp"
# include "../include/PresidentialPardonForm.hpp"

int	main()
{
	
	// PARDON YOU	

	PresidentialPardonForm	pardonmoi("bobby bad asss");
	std::cout << pardonmoi;

	try
	{
		Bureaucrat Tom("Tom", 1);
		std::cout << Tom;
		Tom.signForm(pardonmoi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << pardonmoi;
	
	try
	{
		Bureaucrat Mary("Mary", 3);
		std::cout << Mary;
		Mary.executeForm(pardonmoi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// --------------------------------------------
	
	
	// ROBOCOP FORM

	RobotomyRequestForm	roboCop("smarty pants");
	std::cout << roboCop;

	try
	{
		Bureaucrat Lucy("lucy", 1);
		std::cout << Lucy;
		Lucy.signForm(roboCop);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << roboCop;

	try
	{
		Bureaucrat Jerry("jerry", 12);
		std::cout << Jerry;
		Jerry.executeForm(roboCop);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// --------------------------------------------


	// GET SHRUBBED

	ShrubberyCreationForm	Sherib("slug");
	std::cout << Sherib;

	try
	{
		Bureaucrat	Charlie("charlie", 44);
		std::cout << Charlie;
		Charlie.signForm(Sherib);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << Sherib;

	try
	{
		Bureaucrat	Polly("polly", 4);
		std::cout << Polly;
		Polly.executeForm(Sherib);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
