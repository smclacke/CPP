/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:02:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/10 18:06:43 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <time.h>
# include "Bureaucrat.hpp"

class AForm
{
	private:
		std::string const		_name;
		bool					_signedStatus;
		int	const				_signGrade;
		int	const				_executeGrade;

	public:
		AForm();
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		virtual ~AForm();


	// getters
	std::string		getName() const;
	bool			getSignedStatus() const;
	int				getSignGrade() const;
	int				getExecuteGrade() const;

	// methods
	void			beSigned(Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const = 0;

	// exception classes
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();                 
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	
	class FormNotSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};

};


std::ostream	&operator<<(std::ostream &out, AForm const &form);

#endif

