/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 17:02:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/29 19:18:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string		_name;
		bool			_signedStatus;
		int				_signGrade;
		int				_executeGrade;

	public:
		AForm();
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		virtual ~AForm();

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
	virtual void	execute(Bureaucrat const &executor) const = 0;

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


std::ostream	&operator<<(std::ostream &out, AForm const &form);

#endif

