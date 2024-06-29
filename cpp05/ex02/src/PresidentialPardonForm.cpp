/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:11:23 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 19:32:16 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
# include "../include/AForm.hpp"
# include "../include/Bureaucrat.hpp"

// PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.

// default
PresidentialPardonForm::PresidentialPardonForm() : _target("Default target")
{
	// std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

// constructor with parameter
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("Pardon Form", false, 25, 5)
{
	// std::cout << "PresidentialPardonForm Constructor called" << std::endl;
	this->_target = target;
}

// copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	// std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	// std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_target = copy._target;	
	}
	return *this;
}

// destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}



// methods
// void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
// {
	
// }
