/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:08:47 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 22:06:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Animal.hpp"
# include "../include/WrongAnimal.hpp"
# include "../include/WrongCat.hpp"
# include "../include/Dog.hpp"
# include "../include/Cat.hpp"

int main()
{

	std::cout << std::endl << "----standard stuff----" << std::endl << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	
	std::cout << std::endl << "-----wrong stuff-----" << std::endl << std::endl;

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();
	
	std::cout << std::endl << std::endl;

	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << wrongmeta->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	wrongcat->makeSound();
	wrongmeta->makeSound();


	std::cout << std::endl << std::endl;
	
	delete dog;
	delete cat;
	delete meta;
	delete wrongmeta;
	delete wrongcat;
	
	return 0;
}
