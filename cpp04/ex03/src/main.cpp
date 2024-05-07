/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:40 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:55:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AMateria.hpp"
# include "../include/Character.hpp"
# include "../include/IMateriaSource.hpp"
# include "../include/MateriaSource.hpp"
# include "../include/Cure.hpp"
# include "../include/Ice.hpp"

int main()
{

	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl << std::endl << std::endl;
	
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* jim = new Character("jim");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl << std::endl;
	
	AMateria* tmp;
	AMateria* tmp2;
	
	tmp = src->createMateria("ice");
	tmp2 = src->createMateria("ice");
	jim->equip(tmp);
	bob->equip(tmp2);
	

	tmp = src->createMateria("cure");
	tmp2 = src->createMateria("cure");
	jim->equip(tmp);
	bob->equip(tmp2);


	std::cout << std::endl << std::endl << std::endl;
	
	
	jim->use(0, *bob);
	jim->use(1, *bob);

	bob->use(0, *jim);
	bob->use(1, *jim);

	std::cout << std::endl << std::endl << std::endl;

	delete bob;
	delete jim;
	delete src;
	
	return 0;
}


// Should output:
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$