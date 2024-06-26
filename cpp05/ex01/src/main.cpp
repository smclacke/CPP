/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:24:11 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 21:03:35 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int	main()
{

	try
	{
		// Form		importantForm("Form 123", -3, 4); // invalid signgrade
		Form		importantForm("Form 123", 3, 4);
		std::cout << importantForm;
		
		std::cout << std::endl;

		Bureaucrat	Tom("Tom", 2);
		std::cout << Tom;
		
		Tom.signForm(importantForm);
		std::cout << importantForm;
		
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Form		lessImportant("Form 4242", 2, 6);
		std::cout << lessImportant;
		
		std::cout << std::endl;
		
		Bureaucrat	Tom("Tom", 6); // grade too low to sign
		std::cout << Tom;

		Tom.signForm(lessImportant);
		std::cout << lessImportant;
	
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
