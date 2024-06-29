/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:24:11 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 18:45:27 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int	main()
{
	Bureaucrat	Tom("Tom", 6);
	
	Form		importantForm;

	importantForm.setFormName("Form 123");
	importantForm.setSignGrade(3);
	std::cout << importantForm;
	
	try
	{
		Tom.signForm(importantForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << importantForm;
	std::cout << std::endl;


	Form	lessImportant;
	
	lessImportant.setFormName("Form 4242");
	lessImportant.setSignGrade(9);
	std::cout << lessImportant;

	
	try
	{
		Tom.signForm(lessImportant);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << lessImportant;
	std::cout << std::endl;

	return (0);
}
