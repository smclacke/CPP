/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:08:47 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 16:58:52 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Animal.hpp"
# include "../include/Brain.hpp"
# include "../include/Dog.hpp"
# include "../include/Cat.hpp"

int main()
{
	const Animal* 			dog = new Dog();
	const Animal* 			cat = new Cat();
	const Brain*			brain = new Brain();

	int		numIdeas = 12;

	

	delete dog;
	delete cat;

	return 0;
}
