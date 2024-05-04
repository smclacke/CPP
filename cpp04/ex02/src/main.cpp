/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:08:47 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 20:48:40 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AAnimal.hpp"
# include "../include/Brain.hpp"
# include "../include/Dog.hpp"
# include "../include/Cat.hpp"


void	brainStuff()
{
	Brain		*brain = new Brain();
	int			numIdeas = 5;

	std::cout << std::endl << std::endl;
	
	brain->setIdea("thinking", 0);
	brain->setIdea("pondering", 1);
	brain->setIdea("considering", 2);
	brain->setIdea("mulling", 3);
	brain->setIdea("doubting", 4);
	
	
	for (int i = 0; i < numIdeas; i++)
		std::cout << "Brain idea[" << i << "] : " << brain->getIdea(i) << std::endl;

	std::cout << std::endl << std::endl;
	
	// shallow copy
	Brain		*shallowBrain(brain);

	for (int i = 0; i < numIdeas; i++)
		std::cout << "shallowBrain idea[" << i << "] : " << shallowBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;
	
	
	// deep copy
	Brain		*deepBrain = new Brain(*brain);

	for (int i = 0; i < numIdeas; i++)
		std::cout << "deepBrain idea[" << i << "] : " << deepBrain->getIdea(i) << std::endl;

	std::cout << std::endl << std::endl;

	
	// change idea[0]
	brain->setIdea("change idea", 0);
	std::cout << "change Brain idea[" << 0 << "] : " << brain->getIdea(0) << std::endl;
	std::cout << "change deepBrain idea[" << 0 << "] : " << deepBrain->getIdea(0) << std::endl;
	std::cout << "change shallowBrain idea[" << 0 << "] : " << shallowBrain->getIdea(0) << std::endl;
	
	std::cout << std::endl << std::endl;
	
	delete brain;
	delete deepBrain;
	// delete shallowBrain; // was not created with 'new' so doesn't need to be (shouldn't be) deleted

	std::cout << std::endl << std::endl;
}

void	dogStuff()
{
	const Dog			*dog = new Dog();
	Brain				*dogBrain = dog->getBrain();
	int					dogIdeas = 7;

	std::cout << std::endl << std::endl;
	
	dog->makeSound();

	std::cout << std::endl << std::endl;
	
	dogBrain->setIdea("dog thing 1", 0);
	dogBrain->setIdea("dog thing 2", 1);
	dogBrain->setIdea("dog thing 3", 2);
	dogBrain->setIdea("dog thing 4", 3);
	dogBrain->setIdea("dog thing 5", 4);
	dogBrain->setIdea("dog thing 6", 5);
	dogBrain->setIdea("dog thing 7", 6);

	for (int i = 0; i < dogIdeas; i++)
		std::cout << "dogBrain idea[" << i << "] : " << dogBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;

	// shallow copy
	Brain				*shallowBrain(dogBrain);
	
	for (int i = 0; i < dogIdeas; i++)
		std::cout << "shallowBrain idea[" << i << "] : " << shallowBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;
	
	// deep copy
	Brain				*deepBrain = new Brain(*dogBrain);

	for (int i = 0; i < dogIdeas; i++)
		std::cout << "deepBrain idea[" << i << "] : " << deepBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;
	
	
	// change idea[2]
	dogBrain->setIdea("change idea", 2);
	std::cout << "change dogBrain idea[" << 2 << "] : " << dogBrain->getIdea(2) << std::endl;
	std::cout << "change deepBrain idea[" << 2 << "] : " << deepBrain->getIdea(2) << std::endl;
	std::cout << "change shallowBrain idea[" << 2 << "] : " << shallowBrain->getIdea(2) << std::endl;
	
	std::cout << std::endl << std::endl;
	
	
	delete dog;
	delete deepBrain; // remove for leak :)
	// dogBrain is deleted in destructor of Dog class

	std::cout << std::endl << std::endl;

}

void	catStuff()
{
	const Cat			*cat = new Cat();
	Brain				*catBrain = cat->getBrain();
	int					catIdeas = 7;


	std::cout << std::endl << std::endl;

	cat->makeSound();
	
	std::cout << std::endl << std::endl;

	catBrain->setIdea("milk", 0);
	catBrain->setIdea("mouse", 1);
	catBrain->setIdea("string", 2);
	catBrain->setIdea("kitten", 3);
	catBrain->setIdea("cat", 4);
	catBrain->setIdea("cat nip", 5);
	catBrain->setIdea("nip", 6);

	for (int i = 0; i < catIdeas; i++)
		std::cout << "catBrain idea[" << i << "] : " << catBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;


	// shallow copy
	Brain				*shallowBrain(catBrain);
	
	for (int i = 0; i < catIdeas; i++)
		std::cout << "shallowBrain idea[" << i << "] : " << shallowBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;

	
	// deep copy
	Brain		*deepBrain = new Brain(*catBrain);

	for (int i = 0; i < catIdeas; i++)
		std::cout << "deepBrain idea[" << i << "] : " << deepBrain->getIdea(i) << std::endl;
	
	std::cout << std::endl << std::endl;
	
	
	// change idea[6]
	catBrain->setIdea("change idea", 6);
	std::cout << "change catBrain idea[" << 6 << "] : " << catBrain->getIdea(6) << std::endl;
	std::cout << "change deepBrain idea[" << 6 << "] : " << deepBrain->getIdea(6) << std::endl;
	std::cout << "change shallowBrain idea[" << 6 << "] : " << shallowBrain->getIdea(6) << std::endl;
	
	std::cout << std::endl << std::endl;

	delete cat;
	delete deepBrain; // remove for leak :)
	// catBrain is deleted in destructor of Cat class


	std::cout << std::endl << std::endl;
}


void	animalStuff()
{
	int			num = 10;
	AAnimal		*animals[num];

	// Animal		*animal = new Animal(); // abstract can't be instantiable
	
	// make animals
	for (int i = 0; i < num; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	std::cout << std::endl;
	
	// make animals make sounds
	for (int i = 0; i < num; i++)
		animals[i]->makeSound();
	
	std::cout << std::endl;
	
	// give dog brain
	Brain	*dogBrain = animals[2]->getBrain();
	dogBrain->setIdea("dog thought", 0);
	std::cout << "dog idea: " << dogBrain->getIdea(0) << std::endl;

	std::cout << std::endl;
	
	
	// give cat brain
	Brain	*catBrain = animals[5]->getBrain();
	catBrain->setIdea("cats are better than dogs...", 0);
	std::cout << "cat idea: " << catBrain->getIdea(0) << std::endl;

	std::cout << std::endl;

	// delete all animals, no leaks	
	for (int i = 0; i < num; i++)
			delete animals[i];
	
	std::cout << std::endl << std::endl;
}


int	main()
{
	// brainStuff();
	// dogStuff();
	// catStuff();
	animalStuff();

	return 0;
}
