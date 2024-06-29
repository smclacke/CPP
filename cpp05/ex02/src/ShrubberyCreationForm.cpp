/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:02:35 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 22:27:12 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ShrubberyCreationForm.hpp"
# include "../include/AForm.hpp"

// ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, 
// and writes ASCII trees inside it.

// default
ShrubberyCreationForm::ShrubberyCreationForm() : _target("Default target")
{
	// std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

// constructor with parameter
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("Shrub Form", 145, 137)
{
	// std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
	this->_target = target;
}

// copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	// std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	// std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_target = copy._target;	
	}
	return *this;
}

// destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it

// methods
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	
}

