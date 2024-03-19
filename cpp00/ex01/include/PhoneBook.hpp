/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:36:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/19 23:03:34 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "../include/Contact.hpp"

class PhoneBook
{
	private:
		Contact 		_contact[8];

	public:
		PhoneBook();
		~PhoneBook();

	void	addFunc();
	void	searchFunc();

	void	msg();
	void	errorMsg();
};

#endif