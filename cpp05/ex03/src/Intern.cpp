/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 23:00:45 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/05 19:58:22 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Intern.hpp"

// default
Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	if (this != &copy)
	{
		(void) copy;
	}
	return *this;
}

Intern::~Intern() {}


// methods
AForm	*Intern::Shrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::Robotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}
AForm	*Intern::President(std::string target)
{	
	return new PresidentialPardonForm(target);
}
	
AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	try
	{
		std::string	Form[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

		AForm *(Intern::*newForm[3]) (std::string target) = 
		{
			newForm[0] = &Intern::Shrubbery,
			newForm[1] = &Intern::Robotomy,
			newForm[2] = &Intern::President,
		};
		
		for (int i = 0; i < 3; i++)
		{
			if (Form[i] == name)
			{
				std::cout << "Intern creates " << name << std::endl;
				return (this->*newForm[i])(target);
			}
		}
		throw Intern::InternException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return NULL;
}

const char* Intern::InternException::what() const throw()
{
	return "Error: Intern issues";
}
