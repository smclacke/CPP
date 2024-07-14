/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:07:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/14 11:46:01 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/iter.hpp"

int	main()
{

	size_t len = 10;
	
	int	intArray[len] = {1, 4, 6, 3, 1, 7, 4, 3, 6, 9};
	
	::iter(intArray, len, funkyT<int>);


	size_t length = 4;

	std::string strArray[] = {"string", "thing", "function", "poop"};

	::iter(strArray, length, funkyT<std::string>);

	return 0;
}
