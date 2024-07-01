/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/01 17:25:05 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Form.hpp"

// default
Form::Form() : _name("Formatic Name"), _signedStatus(false), _signGrade(0), _executeGrade(0)
{
	// std::cout << "Form Default Constructor called" << std::endl;
}

// constructor with parameters
Form::Form(std::string name, int signGrade, int executeGrade) 
	: _name(name), _signedStatus(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	// std::cout << "Form Constructor called" << std::endl;
	
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

// copy constructor
Form::Form(const Form &copy) : _name(copy.getName()), _signedStatus(copy.getSignedStatus()), _signGrade(copy.getSignGrade()), _executeGrade(copy.getExecuteGrade())
{
	// std::cout << "Form Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
Form	&Form::operator=(const Form &copy)
{
	// std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &copy)
	{

	}

	return *this;
}

// destructor
Form::~Form()
{
	// std::cout << "Form Destructor called" << std::endl;
}



// getters
std::string		Form::getName() const
{
	return this->_name;
}

bool			Form::getSignedStatus() const
{
	return this->_signedStatus;
}

int				Form::getSignGrade() const
{
	return this->_signGrade;
}

int				Form::getExecuteGrade() const
{
	return this->_executeGrade;
}



// method

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	int		bureaucratGrade = bureaucrat.getGrade();

	if (bureaucratGrade <= this->_signGrade)
		this->_signedStatus = true;
	else
		throw Form::GradeTooLowException();
}



// exception classes
const char* Form::GradeTooHighException::what() const throw()
{
	return "Form grade too high";	
} 

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low";
}



// overload of the insertion '<<' operator
std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	std::string		status;

	if (form.getSignedStatus() == false)
		status = "Not signed";
	else
		status = "Signed";
		
	return out << form.getName() << ": Signed Status [" << status << "] | Sign Grade [" 
	<< form.getSignGrade() << "] | Execute Grade [" << form.getExecuteGrade() << "]" << std::endl;
}


