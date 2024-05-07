/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:40 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 21:02:08 by smclacke      ########   odam.nl         */
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

	std::cout << std::endl;
	
	ICharacter* jim = new Character("jim");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	
	AMateria* materia1;
	AMateria* materia2;

	materia1 = src->createMateria("ice");

	std::cout << std::endl;

	jim->equip(materia1);
	bob->equip(materia1);
	
	std::cout << std::endl;

	materia2 = src->createMateria("cure");

	jim->equip(materia2);
	bob->equip(materia2);

	std::cout << std::endl << std::endl;
	
	
	jim->use(0, *bob);
	jim->use(1, *bob);

	bob->use(0, *jim);
	bob->use(1, *jim);

	std::cout << std::endl << std::endl;

	jim->unequip(0);
	std::cout << "\n";

	jim->unequip(1);
	std::cout << "\n";

	bob->unequip(0);
	std::cout << "\n";
	
	
	bob->unequip(1);
	bob->use(1, *jim); // trying to use unequipped slot
	std::cout << "\n";
	
	
	bob->unequip(-2); // invalid slot
	bob->use(100, *jim); // invalid use

	std::cout << "\n";
	
	materia1 = src->createMateria("cure");
	bob->equip(materia1);
	std::cout << "\n";

	std::cout << std::endl << std::endl;

	materia1 = src->createMateria("ice");
	jim->equip(materia1);
	materia1 = src->createMateria("cure");
	jim->equip(materia1);
	materia1 = src->createMateria("cure");
	jim->equip(materia1);
	materia1 = src->createMateria("cure");
	jim->equip(materia1);
	materia1 = src->createMateria("cure");
	jim->equip(materia1); // no inventory space left
	materia1 = src->createMateria("cure");
	bob->equip(materia1);


	std::cout << std::endl << std::endl;

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