/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 16:39:08 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 19:25:02 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Brain.hpp"

// default
Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

// copy constructor
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
Brain	&Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->setIdea(copy.getIdea(i), i);
	}
	return *this;
}

// destructor
Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}


// setters
void		Brain::setIdea(const std::string idea, int i)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
}

// getters
const std::string		&Brain::getIdea(unsigned int i) const
{
	if (i >= 0 && i < 100)
		return this->_ideas[i];
	return this->_ideas[0];
}
