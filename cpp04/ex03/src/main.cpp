/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:40 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:22:37 by smclacke      ########   odam.nl         */
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

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl << std::endl;
	
	AMateria* tmp;
	AMateria* tmp2;
	
	tmp = src->createMateria("ice");
	tmp2 = src->createMateria("ice");
	me->equip(tmp);
	bob->equip(tmp2);
	

	tmp = src->createMateria("cure");
	tmp2 = src->createMateria("cure");
	me->equip(tmp);
	bob->equip(tmp2);


	std::cout << std::endl << std::endl << std::endl;
	
	
	me->use(0, *bob);
	me->use(1, *bob);

	bob->use(0, *me);
	bob->use(1, *me);

	std::cout << std::endl << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;

	// IMateriaSource* src = new MateriaSource();
	
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	
	// ICharacter* person = new Character("jim");
	// AMateria* tmp;
	
	// tmp = src->createMateria("ice");
	// person->equip(tmp);

	// tmp = src->createMateria("cure");
	// person->equip(tmp);

	
	// ICharacter* bob = new Character("bob");
	
	// person->use(0, *bob);
	// person->use(1, *bob);
	

	

	// delete bob;
	// delete person;
	// delete src;
	
	return 0;
}


// Should output:
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$