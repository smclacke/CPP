/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 21:40:19 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/19 23:19:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Contact.hpp"


Contact::Contact(){}

Contact::Contact(std::string first, std::string last, std::string nick, \
			std::string num, std::string secret)
{
	this->setFirstName(first);
	this->setLastName(last);
	this->setNickName(nick);
	this->setNumber(num);
	this->setSecret(secret);
}

Contact::~Contact(){}


// ---- setters ---- //

/**
 * @todo	add validity checks
*/
void	Contact::setFirstName(std::string first)
{
	if (first.empty())
		throw(std::runtime_error("First Name can't be empty!"));

	this->_firstName = first;
}

void	Contact::setLastName(std::string last)
{
	if (last.empty())
		throw(std::runtime_error("Last Name can't be empty!"));
	this->_lastName = last;
}

void	Contact::setNickName(std::string nick)
{
	if (nick.empty())
		throw(std::runtime_error("Nick Name can't be empty!"));
	this->_nickName = nick;
}

void	Contact::setNumber(std::string num)
{
	if (num.empty())
		throw(std::runtime_error("Phone Number can't be empty!"));
	this->_phoneNumber = num;
}

void	Contact::setSecret(std::string secret)
{
	if (secret.empty())
		throw(std::runtime_error("Darkest Secret can't be empty!"));
	this->_darkestSecret = secret;
}


// ---- getters ---- //
// get index, check input


// prints specified contact
// void	Contact::printContact() const
// {
	
// }
