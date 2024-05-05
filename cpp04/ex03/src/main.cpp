/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:40 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 18:36:28 by smclacke      ########   odam.nl         */
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
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}


// Should output:
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$