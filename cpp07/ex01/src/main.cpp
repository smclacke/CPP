/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:07:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 14:38:14 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/iter.hpp"

int	main()
{

	int	intArray[10] = {1, 4, 6, 3, 1, 7, 4, 3, 6, 9};
	size_t	len = 10;

	::iter(intArray, len, funkyT<int>);

	std::cout << std::endl << std::endl;

	std::string strArray[4] = {"string ", "thing ", "function ", "words"};
	size_t length = 4;

	::iter(strArray, length, funkyT<std::string>);
	
	std::cout << std::endl << std::endl;

	char	charArray[7] = {'a', 'i', 'r', 'd', 'w', 'n', 'r'};
	size_t	size = 7;

	::iter(charArray, size, funkyT<char>);

	return 0;
}
