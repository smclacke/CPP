/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:02:35 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 19:48:44 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ShrubberyCreationForm.hpp"
# include <fstream>

// default
ShrubberyCreationForm::ShrubberyCreationForm() : _target("Default target") {}

// constructor with parameter
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubForm", 145, 137)
{
	this->_target = target;
}

// copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

// copy assignment operator
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;	
	}
	return *this;
}

// destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}


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

