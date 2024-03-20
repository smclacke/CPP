/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:36:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 13:21:05 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}


// ---- ADD ---- //

Contact	setContact()
{
	std::string		first, last, nick, num, secret;

	std::cout << "First Name: ";
	std::getline(std::cin, first);
	std::cout << "Last Name: ";
	std::getline(std::cin, last);
	std::cout << "Nick Name: ";
	std::getline(std::cin, nick);
	std::cout << "Phone Number: ";
	std::getline(std::cin, num);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, secret);

	Contact	newPerson(first, last, nick, num, secret);
	return (newPerson);
}

void	PhoneBook::addFunc()
{
	static	int	index = 0;

	try
	{
		if (index >= 8)
		{
			index = 0;
			std::cout << "Watch out! Only room for 8 contacts!!" << std::endl;	
			std::cout << "Overwriting contact 1..." << std::endl;	
		}
		this->_contact[index] = setContact();
		std::cout << "Contact " << "[" << (index + 1) << "]" << " successfully added yippiee" << std::endl;
		index++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


// ---- SEARCH ---- //

/**
 * @todo	check index input
*/
void	PhoneBook::searchFunc()
{
	int				index = 0;

	for (int i = 0; i <= 7; i++)
		_contact[i].getPreview(i);

	try
	{
		std::string		indexString;

		std::cout << "Input contact index: ";
		std::getline(std::cin, indexString);
		if (indexString.empty())
		{
			std::cout << std::endl;
			throw(std::runtime_error("ERROR: invalid index"));
		}
		else
		{
			// if indexString != >=1 || <= 8 - error - check not number
			index = stoi(indexString); // if fails?
			if (index < 1 || index > 8)
			{
				std::cout << std::endl;
				throw(std::runtime_error("ERROR: invalid index"));
			}
			index -= 1;
			_contact[index].getContact(index);
		}
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

