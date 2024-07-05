/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:07:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 19:56:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AForm.hpp"

// default
AForm::AForm() : _name("AFormatic Name"), _signedStatus(false), _signGrade(0), _executeGrade(0) {}

// constructor with parameters
AForm::AForm(std::string name, int signGrade, int executeGrade) 
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
AForm::AForm(const AForm &copy) : _name(copy.getName()), _signedStatus(copy.getSignedStatus()), _signGrade(copy.getSignGrade()), _executeGrade(copy.getExecuteGrade())
{
	*this = copy;
}

// copy assignment operator
AForm	&AForm::operator=(const AForm &copy)
{
	if (this != &copy)
	{
		(void) copy;
	}
	return *this;
}


// destructor
AForm::~AForm() {}



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

	try
	{
		if (bureaucratGrade <= this->_signGrade)
			this->_signedStatus = true;
		else
			throw AForm::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	AForm::execute(Bureaucrat const &executor) const
{
	int	excutorGrade = executor.getGrade();
	int	excuteGrade = this->_executeGrade;
	
	try
	{
		if (excutorGrade > excuteGrade)
			throw AForm::GradeTooLowException();
		if (this->_signedStatus == false)
			throw AForm::FormNotSigned();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
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

