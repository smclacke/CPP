/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 21:40:19 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 15:03:27 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Contact.hpp"

// ---- constructors ---- //
Contact::Contact(){}
Contact::~Contact(){}

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret)
{
	this->setFirstName(first);
	this->setLastName(last);
	this->setNickName(nick);
	this->setNumber(num);
	this->setSecret(secret);
}


// ---- setters ---- //
/**
 * @todo	phone number, digits 5-10, rest??
*/
void	Contact::setFirstName(std::string first)
{
	if (first.empty())
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: First Name can't be empty!"));
	}
		
	this->_firstName = first;
}

void	Contact::setLastName(std::string last)
{
	if (last.empty())
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: Last Name can't be empty!"));
	}
		
	this->_lastName = last;
}

void	Contact::setNickName(std::string nick)
{
	if (nick.empty())
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: Nick Name can't be empty!"));
	}
		
	this->_nickName = nick;
}

void	Contact::setNumber(std::string num)
{
	if (num.empty())
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: Phone Number can't be empty!"));
	}
	if (!checkDigit(num))
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: Phone Number must be between 5 and 10 digits long"));
	}

	this->_phoneNumber = num;
}

void	Contact::setSecret(std::string secret)
{
	if (secret.empty())
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: Darkest Secret can't be empty!"));
	}
	
	this->_darkestSecret = secret;
}


// ---- getters ---- //
/**
 * @todo		format this correctly

		Display the saved contacts as a list of 4 columns: index, first name, last
		name and nickname.
		Each column must be 10 characters wide. A pipe character (’|’) separates
		them. The text must be right-aligned. If the text is longer than the column,
		it must be truncated and the last displayable character must be replaced by a
		dot (’.’).
*/
// prints preview before specification
void	Contact::getPreview(int index) const
{
	std::cout << (index + 1) << "  |  ";
	std::cout << this->_firstName;
	std::cout << "  |  ";
	std::cout << this->_lastName;
	std::cout << "  |  ";
	std::cout << this->_nickName << std::endl;
}

void	Contact::getContact(int index) const
{
	std::cout << "Index:			" << (index + 1) << std::endl;
	std::cout << "First Name:		" << this->_firstName << std::endl;
	std::cout << "Last Name:		" << this->_lastName << std::endl;
	std::cout << "Nick Name:		" << this->_nickName << std::endl;
	std::cout << "Phone Number:		" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret:		" << this->_darkestSecret << std::endl;
}


// ---- utils ---- //
int	Contact::checkDigit(std::string str)
{
	int		len = str.length();
	
	if (len > 10 || len < 5)
		return (0);
	
	for (int i  = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

