/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 18:57:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AForm.hpp"
# include "../include/Bureaucrat.hpp"

// default
AForm::AForm() : _name("Default"), _signedStatus(false), _signGrade(0), _executeGrade(0)
{
	// std::cout << "AForm Default Constructor called" << std::endl;
}

// copy constructor
AForm::AForm(const AForm &copy)
{
	// std::cout << "AForm Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
AForm	&AForm::operator=(const AForm &copy)
{
	// std::cout << "AForm Copy assignment operator called" << std::endl;
	
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
AForm::~AForm()
{
	// std::cout << "AForm Destructor called" << std::endl;
}



// getters
std::string		AForm::getName() const
{
	return this->_name;
}

bool			AForm::getSignedStatus() const
{
	return this->_signedStatus;
}

int				AForm::getSignGrade() const
{
	return this->_signGrade;
}

int				AForm::getExecuteGrade() const
{
	return this->_executeGrade;
}


// setters
void			AForm::setFormName(std::string const &name)
{
	this->_name = name;
}

void			AForm::setSignGrade(int signGrade)
{
	this->_signGrade = signGrade;
}

void			AForm::setExecuteGrade(int executeGrade)
{
	this->_executeGrade = executeGrade;
}



// methods
void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	int		bureaucratGrade = bureaucrat.getGrade();

	if (bureaucratGrade <= this->_signGrade)
		this->_signedStatus = true;
	else
		throw AForm::GradeTooLowException();
}



// exception classes
const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";	
} 

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}



// overload of the insertion '<<' operator
std::ostream	&operator<<(std::ostream &out, AForm const &form)
{
	std::string		status;

	if (form.getSignedStatus() == false)
		status = "Not signed";
	else
		status = "Signed";
		
	return out << form.getName() << ": Signed Status - " << status << " | Sign Grade - " 
	<< form.getSignGrade() << " | Execute Grade - " << form.getExecuteGrade() << std::endl;
}


