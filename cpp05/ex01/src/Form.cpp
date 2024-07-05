/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 19:54:25 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Form.hpp"

// default
Form::Form() : _name("Formatic Name"), _signedStatus(false), _signGrade(0), _executeGrade(0) {}

// constructor with parameters
Form::Form(std::string name, int signGrade, int executeGrade) 
	: _name(name), _signedStatus(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	try
	{
		if (signGrade < 1 || executeGrade < 1)
			throw GradeTooHighException();
		else if (signGrade > 150 || executeGrade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

// copy constructor
Form::Form(const Form &copy) : _name(copy.getName()), _signedStatus(copy.getSignedStatus()), _signGrade(copy.getSignGrade()), _executeGrade(copy.getExecuteGrade())
{
	*this = copy;
}

// copy assignment operator
Form	&Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		(void) copy;
	}
	return *this;
}

// destructor
Form::~Form() {}



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

	try
	{
		if (bureaucratGrade <= this->_signGrade)
			this->_signedStatus = true;
		else
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
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


