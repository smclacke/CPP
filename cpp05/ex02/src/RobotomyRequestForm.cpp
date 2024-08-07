/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:10:55 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 17:57:10 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/RobotomyRequestForm.hpp"
# include <cstdlib>

// default
RobotomyRequestForm::RobotomyRequestForm() : _target("Default target") {}

// constructor with parameter
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("Robo Form", 72, 45)
{
	this->_target = target;
}

// copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

// copy assignment operator
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;	
	}
	return *this;
}

// destructor
RobotomyRequestForm::~RobotomyRequestForm() {}


// methods
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand((unsigned)time(NULL));

	AForm::execute(executor);
	std::cout << "some drilling noises...";

	if (rand() % 2)
		std::cout << this->_target << " has been successfully robotomized!!" << std::endl;
	else
		std::cout << "robotomy tried and failed on target: " << this->_target << std::endl;
}

