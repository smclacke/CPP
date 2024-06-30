/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 19:13:21 by smclacke      #+#    #+#                 */
/*   Updated: 2024/06/30 18:49:45 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string		_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
	
	// methods
	void	execute(Bureaucrat const &executor) const;
};


#endif

