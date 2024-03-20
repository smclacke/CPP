/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:36:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 14:56:45 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include "../include/Contact.hpp"

class PhoneBook
{
	private:
		Contact 		_contact[8];

	public:
		PhoneBook();
		~PhoneBook();

// ---- setters ---- //
	void	addFunc();

// ---- getters ---- //
	void	searchFunc();

// ---- utils ---- //
	void	msg();
	void	errorMsg();
	int		checkIsDigit(std::string str);

};

#endif