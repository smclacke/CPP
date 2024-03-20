/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 18:27:26 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 13:03:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_phoneNumber;
		std::string		_darkestSecret;

	public:
		Contact();
		Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret);
		~Contact();

// ---- setters ---- //
	void		setFirstName(std::string first);
	void		setLastName(std::string last);
	void		setNickName(std::string nick);
	void		setNumber(std::string num);
	void		setSecret(std::string secret);
	
// ---- getters ---- //

	
// ---- print ---- //
	void		printPreview(int index) const;
	void		printContact(int index) const;


};

#endif