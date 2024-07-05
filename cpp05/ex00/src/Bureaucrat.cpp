/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 15:48:03 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 19:53:00 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

// default
Bureaucrat::Bureaucrat() : _name("Bureaucratic Name"), _grade(0) {}

// constructor with parameters
Bureaucrat::Bureaucrat(std::string name, int grade) :  _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

// copy assignment operator
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		this->_grade = copy._grade;
	return *this;
}

// destructor
Bureaucrat::~Bureaucrat() {}


// getters
std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}


// methods
void	Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade > 1)
			this->_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade < 150)
			this->_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}



// exception classes
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high";	
} 

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade too low";
}


// overload of the insertion '<<' operator
std::ostream	&operator<<(std::ostream &out, Bureaucrat const &name)
{
	return out << name.getName() << ", bureaucrat grade " << name.getGrade() << std::endl;
}
