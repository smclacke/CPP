/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:40 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 12:54:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AMateria.hpp"
# include "../include/Character.hpp"
# include "../include/ICharacter.hpp"
# include "../include/MateriaSource.hpp"
# include "../include/IMateriaSource.hpp"
# include "../include/Cure.hpp"
# include "../include/Ice.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	
	ICharacter* person = new Character("person");
	// AMateria* tmp;
	
	// tmp = src->createMateria("ice");
	// person->equip(tmp);

	// tmp = src->createMateria("cure");
	// person->equip(tmp);

	
	ICharacter* bob = new Character("bob");
	
	// person->use(0, *bob);
	// person->use(1, *bob);
	
	delete bob;
	delete person;
	// delete src;
	
	return 0;
}


// Should output:
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$