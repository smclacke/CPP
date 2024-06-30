/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 16:31:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 16:24:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main()
{

	std::cout << "good Tom" <<  std::endl;
	try
	{
		
		Bureaucrat tomGood("TomGood", 5);
		std::cout << tomGood;

		tomGood.incrementGrade(); // 4

		std::cout << tomGood;

		tomGood.decrementGrade(); // 5
		
		std::cout << tomGood;

		tomGood.decrementGrade(); // 6
		tomGood.decrementGrade(); // 7
		tomGood.decrementGrade(); // 8
		
		std::cout << tomGood;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	



	std::cout << "bad Tom" <<  std::endl;
	try
	{
		Bureaucrat	tomBad("TomBad", -5);

		std::cout << tomBad;

		tomBad.decrementGrade();
		tomBad.decrementGrade();
		tomBad.decrementGrade();
		tomBad.decrementGrade();
		tomBad.decrementGrade();
		tomBad.decrementGrade();

		std::cout << tomBad;
		
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	
	
	
	std::cout << "awful Tom" <<  std::endl;
	try
	{

		Bureaucrat	tomAwful("TomAwful", 205);
		std::cout << tomAwful;

		tomAwful.incrementGrade();		
		tomAwful.incrementGrade();		
		tomAwful.incrementGrade();		
		tomAwful.incrementGrade();
		
		std::cout << tomAwful;
				
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	


	// // if we throwing exceptions from constructor, or via methods, need to 
	// // have the code inside try-catch blocks otherwise core gets dumped

	// std::cout << "Tom gotta be in a try-catch block cause of constructor" << std::endl;
	// Bureaucrat	tomOutside("TomOutside", 222); // breaks it
	
	// try
	// {
	// 	Bureaucrat	tomInside("TomInside", 222);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }


	// // default is ok outside try-catch since no throw, but if methods used, need to catch

	// Bureaucrat	defaultyTom;

	// std::cout << defaultyTom; // default fine since no throws
	
	// defaultyTom.incrementGrade(); // bad

	
	// // this is ok since the default doesn't throw, only increment, if that throws, it can't be caught
	// try
	// {
	// 	defaultyTom.incrementGrade();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	



	return (0);
}
