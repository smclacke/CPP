/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 22:54:35 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 23:26:59 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "../include/ShrubberyCreationForm.hpp"
# include "../include/RobotomyRequestForm.hpp"
# include "../include/PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		Intern		&operator=(const Intern &copy);
		~Intern();

	// methods
	AForm	*Shrubbery(std::string target);
	AForm	*Robotomy(std::string target);
	AForm	*President(std::string target);
	AForm	*makeForm(const std::string &name, const std::string &target);

	class InternException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

};

#endif
