/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:10:55 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 22:11:40 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/RobotomyRequestForm.hpp"
# include "../include/AForm.hpp"

// RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.


// default
RobotomyRequestForm::RobotomyRequestForm() : _target("Default target")
{
	// std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

// constructor with parameter
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("Robotomy Form", 72, 45)
{
	// std::cout << "RobotomyRequestForm Constructor called" << std::endl;
	this->_target = target;
}

// copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	// std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	// std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_target = copy._target;	
	}
	return *this;
}

// destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}


// methods
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "some drilling noises...";

	// for (int i = 7; i--;)
	// 	std::cout << rand() << std::endl;

	if (rand() % 2 == 0)
		std::cout << this->_target << " has been successfully robotomized!!" << std::endl;
	else
		std::cout << "robotomy tried and failed on target: " << this->_target << std::endl;
}


