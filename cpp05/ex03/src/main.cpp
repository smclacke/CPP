/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 23:17:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 23:29:27 by smclacke      ########   odam.nl         */
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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	try
	{
		Intern	jane;
		AForm	*form;

		form = jane.makeForm("Pardon", "");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	return (0);
}
