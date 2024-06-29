/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:02:35 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 23:57:55 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ShrubberyCreationForm.hpp"
# include "../include/AForm.hpp"
# include <fstream>

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


// methods
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	
	std::ofstream	file;
	std::string		output = std::string(_target + "_shrubbery");
	const char*		outfile = output.c_str();

	file.open(outfile);
	if (!file)
	{
		std::cout << "Couldn't open file" << std::endl;
		return ;
	}
	file << ASCII_ELEPHANT;
	file.close();
}

