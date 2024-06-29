/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 22:51:31 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AForm.hpp"

// default
AForm::AForm() : _name("Default"), _signedStatus(false), _signGrade(0), _executeGrade(0)
{
	// std::cout << "AForm Default Constructor called" << std::endl;
}

// constructor with parameters
AForm::AForm(const std::string &name, int signGrade, int executeGrade)
{
	// std::cout << "AForm Constructor called" << std::endl;
	
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	else
	{
		this->_name = name;
		this->_signGrade = signGrade;
		this->_signedStatus = false;
		this->_executeGrade = executeGrade;
	}
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



// methods
void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	int		bureaucratGrade = bureaucrat.getGrade();

	if (bureaucratGrade <= this->_signGrade)
		this->_signedStatus = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executor) const
{
	int	excutorGrade = executor.getGrade();
	int	excuteGrade = this->_executeGrade;
	
	if (excutorGrade > excuteGrade)
		throw AForm::GradeTooLowException();
	if (this->_signedStatus == false)
		throw AForm::FormNotSigned();
}


// exception classes
const char* AForm::GradeTooHighException::what() const throw()
{
	return "Form grade too high";	
} 

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Form grade too low";
}

const char* AForm::FormNotSigned::what() const throw()
{
	return "Form not signed";
}



// overload of the insertion '<<' operator
std::ostream	&operator<<(std::ostream &out, AForm const &form)
{
	std::string		status;

	if (form.getSignedStatus() == false)
		status = "Not signed";
	else
		status = "Signed";
		
	return out << form.getName() << ": Signed Status [" << status << "] | Sign Grade [" 
	<< form.getSignGrade() << "] | Execute Grade [" << form.getExecuteGrade() << "]" << std::endl;
}

