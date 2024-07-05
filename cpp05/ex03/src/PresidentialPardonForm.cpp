/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:11:23 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 19:47:50 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PresidentialPardonForm.hpp"

// default
PresidentialPardonForm::PresidentialPardonForm() : _target("Default target") {}

// constructor with parameter
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("Pardon Form", 25, 5)
{
	this->_target = target;
}

// copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

// copy assignment operator
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;	
	}
	return *this;
}

// destructor
PresidentialPardonForm::~PresidentialPardonForm() {}



// methods
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

