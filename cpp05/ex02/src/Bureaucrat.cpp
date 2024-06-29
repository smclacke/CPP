/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 15:48:03 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 22:15:57 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AForm.hpp"

// default
Bureaucrat::Bureaucrat() : _name("DefaultName"), _grade(0)
{
	// std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

// constructor with parameters
Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = grade;
		this->_name = name;
		// std::cout << "Bureaucrat Constructor called" << std::endl;
	}
}

// copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	// std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	// std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_grade = copy._grade;
	}
	return *this;
}

// destructor
Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat Destructor called" << std::endl;
}


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
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() <<  std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " becuase " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " excuted " << form.getName() << std::endl; 
	}
	catch(const std::exception &e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " becuase " << e.what() << std::endl;
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
