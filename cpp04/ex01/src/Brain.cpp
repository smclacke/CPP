/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 16:39:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 16:54:30 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Brain.hpp"

// default
Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

// copy constructor (shallow copy)
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator (deep copy)
Brain	&Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	return *this;
}

// destructor
Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}


// Methods
void		Brain::setIdea(std::string idea, int i)
{
	if (i >= 0 && i < 100)
		_ideas[i] = idea;
}

std::string		Brain::getIdeas(unsigned int i)
{
	if (i >= 0 && i < 100)
		return this->_ideas[i];
	return _ideas[0];
}
