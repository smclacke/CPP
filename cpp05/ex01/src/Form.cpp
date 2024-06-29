/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 17:25:50 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Form.hpp"

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
	return out << form.getName() << ": Signed Status - " << form.getSignedStatus() << " | Sign Grade - " 
	<< form.getSignGrade() << " | Execute Grade - " << form.getExecuteGrade() << std::endl;
}


