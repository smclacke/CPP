/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:40 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 23:35:57 by SarahLouise   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AMateria"

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