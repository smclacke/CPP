/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/09 22:16:07 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 17:59:55 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Base.hpp"

int		main()
{
	srand((unsigned)time(NULL));
	Base *base_1 = generate();
	Base *base_2 = generate();
	Base *base_3 = generate();
	Base *base_4 = generate();
	Base *base_5 = generate();
	Base *unknown = NULL;

	std::cout << std::endl;

	identify(base_1);
	identify(base_2);
	identify(base_3);
	identify(base_4);
	identify(base_5);
	identify(unknown);
	
	std::cout << std::endl;

	identify(*base_1);
	identify(*base_2);
	identify(*base_3);
	identify(*base_4);
	identify(*base_5);
	identify(*unknown);
	
	std::cout << std::endl;

	delete base_1;
	delete base_2;
	delete base_3;
	delete base_4;
	delete base_5;

	return 0;
}
