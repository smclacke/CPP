/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 18:42:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/20 14:52:29 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PhoneBook.hpp"

int		main()
{
	PhoneBook		Book;
	std::string		cmd;

	Book.msg();
	while (1)
	{
		std::getline(std::cin, cmd);

		if (cmd.compare("ADD") == 0)
			Book.addFunc();
		else if (cmd.compare("SEARCH") == 0)
			Book.searchFunc();
		else if (cmd.compare("EXIT") == 0 || std::cin.eof())
			exit(EXIT_SUCCESS);
		else if (cmd.compare("") == 0 || cmd.compare(" ") == 0)
			continue ;
		else
			Book.errorMsg();
	}
	return (0);
}
