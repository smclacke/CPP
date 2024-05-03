/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:08:47 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:48:09 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Animal.hpp"
# include "../include/Dog.hpp"
# include "../include/Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << std::endl << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	std::cout << std::endl << std::endl;
	
	delete dog;
	delete cat;
	delete meta;
	
	return 0;
}
