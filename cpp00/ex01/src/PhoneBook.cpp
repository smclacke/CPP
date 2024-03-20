/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:36:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 17:24:25 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

// ---- constructors ---- //
PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

// ---- setters ---- //
Contact	setContact()
{
	std::string		first, last, nick, num, secret;

	std::cout << "first name: ";
	std::getline(std::cin, first);
	std::cout << "last name: ";
	std::getline(std::cin, last);
	std::cout << "nickname: ";
	std::getline(std::cin, nick);
	std::cout << "phone number: ";
	std::getline(std::cin, num);
	std::cout << "darkest secret: ";
	std::getline(std::cin, secret);

	Contact	newPerson(first, last, nick, num, secret);
	return (newPerson);
}

void	PhoneBook::addFunc()
{
	static int		i = 0;

	try
	{
		if (i >= 8)
		{
			i = 0;
			std::cout << "Watch out! Only room for 8 contacts!!" << std::endl;	
			std::cout << "Overwriting contact 1..." << std::endl;	
		}
		this->_contact[i] = setContact();
		std::cout << "Contact " << "[" << (i + 1) << "]" << " successfully added, yippiee!!" << std::endl;
		i++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	PhoneBook::index = i;
}


// ---- getters ---- //
void	PhoneBook::searchFunc()
{
	for (int i = 0; i < index; i++)
		_contact[i].getPreview(i);

	try
	{
		std::string		indexString;
		int				i = 0;

		std::cout << "Input contact index: ";
		std::getline(std::cin, indexString);
		if (indexString.empty() || !checkIndex(indexString))
		{
			std::cout << std::endl;
			throw(std::runtime_error("ERROR: invalid index: must be a digit between 1 and 8"));
		}
		else
		{
			i = stoi(indexString);
			if (i < 1 || i > 8)
			{
				std::cout << std::endl;
				throw(std::runtime_error("ERROR: invalid index: digit must be between 1 and 8"));
			}
			i -= 1;
			_contact[i].getContact(i);
		}
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}


// ---- utils ---- //
void	PhoneBook::msg()
{
	std::cout << "\n\t	*** TOTALLY RADICAL PHONEBOOK ***" << std::endl << std::endl;
	std::cout << "\t~~~Command options include: ADD | SEARCH | EXIT~~~\n" << std::endl;
}

void	PhoneBook::errorMsg()
{
	std::cout << "\nERROR: Command options include: ADD | SEARCH | EXIT" << std::endl;
}

int		PhoneBook::checkIndex(std::string index)
{
	int		len = index.length();

	if (len != 1)
		return (0);
	for (int i = 0; i < len; i++)
	{
		if (!isdigit(index[i]))
			return (0);
	}
	return (1);
}
