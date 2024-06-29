/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 18:46:48 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Form.hpp"
# include "../include/Bureaucrat.hpp"

// default
Form::Form() : _name("Default"), _signedStatus(false), _signGrade(0), _executeGrade(0)
{
	// std::cout << "Form Default Constructor called" << std::endl;
}

// copy constructor
Form::Form(const Form &copy)
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
		this->_name = copy._name;
		this->_signedStatus = copy._signedStatus;
		this->_signGrade = copy._signGrade;
		this->_executeGrade = copy._executeGrade;
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


// setters
void			Form::setFormName(std::string const &name)
{
	this->_name = name;
}

void			Form::setSignGrade(int signGrade)
{
	this->_signGrade = signGrade;
}

void			Form::setExecuteGrade(int executeGrade)
{
	this->_executeGrade = executeGrade;
}



// methods
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
	return "grade too high";	
} 

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}



// overload of the insertion '<<' operator
std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	std::string		status;

	if (form.getSignedStatus() == false)
		status = "Not signed";
	else
		status = "Signed";
		
	return out << form.getName() << ": Signed Status - " << status << " | Sign Grade - " 
	<< form.getSignGrade() << " | Execute Grade - " << form.getExecuteGrade() << std::endl;
}


