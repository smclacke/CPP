/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/07 12:23:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/19 17:42:52 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; char *str = argv[i]; i++)
		{
			for (int j = 0; str[j] != '\0'; j++)
				std::cout << (char(toupper(str[j])));
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
