/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 20:54:30 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 17:57:14 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AForm.hpp"
# include "../include/ShrubberyCreationForm.hpp"
# include "../include/RobotomyRequestForm.hpp"
# include "../include/PresidentialPardonForm.hpp"

int	main()
{

	// PARDON YOU	

	std::cout << "------------PARDON FORM-------------" << std::endl << std::endl;

	PresidentialPardonForm	pardonmoi("bobby bad asss");
	std::cout << pardonmoi;
	std::cout << std::endl;

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
	
	std::cout << std::endl;
	std::cout << pardonmoi;
	
	std::cout << std::endl;
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

	std::cout << std::endl;
	// --------------------------------------------
	
	
	// ROBOCOP FORM

	std::cout << "------------ROBO FORM-------------" << std::endl << std::endl;

	RobotomyRequestForm	roboCop("smarty pants");
	std::cout << roboCop;
	std::cout << std::endl;

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
	
	std::cout << std::endl;

	std::cout << roboCop;

	std::cout << std::endl;

	try
	{
		Bureaucrat Jerry("jerry", 82);
		std::cout << Jerry;
		Jerry.executeForm(roboCop);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat Tom("Tom", 2);
		std::cout << Tom;
		Tom.executeForm(roboCop);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	// --------------------------------------------


	// GET SHRUBBED
	
	std::cout << "------------SHRUB FORM-------------" << std::endl << std::endl;

	ShrubberyCreationForm	Sherib("sluggish");
	std::cout << Sherib;

	std::cout << std::endl;
	
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

	std::cout << std::endl;
	
	std::cout << Sherib;

	std::cout << std::endl;
	
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
