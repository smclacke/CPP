/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 21:40:19 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 16:19:33 by smclacke      ########   odam.nl         */
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
	if (checkNumber(num) == 0)
	{
		std::cout << std::endl;
		throw(std::runtime_error("ERROR: Phone Number must be between 1 and 10 digits long"));
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
static std::string		truncFunc(std::string str)
{
	std::string		newStr;

	if (str.length() > 10)
	{
		newStr = str.substr(0,9) + '.';
		return (newStr);
	}
	else
		return (str);
}

static	void	printNames(std::string str, int len)
{
	for (int space = (10 - len); space > 0; space--)
		std::cout << " ";
	std::cout << str << "|";
}

void	Contact::getPreview(int index) const
{
	std::string	first = truncFunc(this->_firstName);
	std::string	last = truncFunc(this->_lastName);
	std::string	nick = truncFunc(this->_nickName);

	for (int space = 9; space > 0; space--)
		std::cout << " ";
	std::cout << (index + 1) << "|";

	printNames(first, first.length());
	printNames(last, last.length());
	printNames(nick, nick.length());

	std::cout << std::endl;
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
int		Contact::checkNumber(std::string str)
{
	int		len = str.length();
	
	if (len > 10 || len < 1)
		return (0);
	
	for (int i  = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}


