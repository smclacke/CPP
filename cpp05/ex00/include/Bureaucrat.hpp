/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 15:42:10 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 20:16:46 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string	const		_name;
		int						_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &copy);
		~Bureaucrat();

	// getters
	std::string			getName() const;
	int					getGrade() const;
	
	// methods
	void				incrementGrade();			
	void				decrementGrade();

	// exception classes
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();                 
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &Name);

#endif
