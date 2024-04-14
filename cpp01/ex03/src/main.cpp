/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 02:16:41 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Weapon.hpp"
# include "../include/HumanA.hpp"
# include "../include/HumanB.hpp"

// HumanA gets a weapon when constructed so always armed, humanB doesn't

int	main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanA bob("Bob", club);
		std::cout << "Bob is here to play.." << std::endl;
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << "Bob is undefeated!!" << std::endl << std::endl;
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		std::cout << "Jim thinks he stands a chance.." << std::endl;
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << "Jim gets lucky this time" << std::endl << std::endl;
	}
	{
		HumanB polly("Polly");
		std::cout << "Polly joins the party" << std::endl;
		polly.attack();
		std::cout << "Polly died..." << std::endl;
	}
	return (0);
}
