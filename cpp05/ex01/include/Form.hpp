/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:02:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 18:29:43 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string		_name;
		bool			_signedStatus;
		int				_signGrade;
		int				_executeGrade;

	public:
		Form();
		Form(const Form &copy);
		Form	&operator=(const Form &copy);
		virtual ~Form();

	// getters
	std::string		getName() const;
	bool			getSignedStatus() const;
	int				getSignGrade() const;
	int				getExecuteGrade() const;

	// setters
	void			setFormName(std::string const &name);
	void			setSignGrade(int signGrade);
	void			setExecuteGrade(int executeGrade);

	// methods
	void			beSigned(Bureaucrat &bureaucrat);

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


std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif

