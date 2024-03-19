/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/19 18:42:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/19 22:24:47 by smclacke      ########   odam.nl         */
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
		getline(std::cin, cmd);

		if (cmd == "ADD")
			Book.addFunc();
		else if (cmd == "SEARCH")
			Book.searchFunc();
		else if (cmd == "EXIT" || std::cin.eof())
			exit(EXIT_SUCCESS);
		else
			Book.errorMsg();
	}
	return (0);
}
