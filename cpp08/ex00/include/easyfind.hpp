/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 17:26:29 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/27 17:28:05 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>


// T is a container of integers
// easyfind function must find the first occurrence of 
// the second parameter in the first parameter
// if no occurance is found, either throw exception or return an error value

// iterator is a iterator type nested inside the type T container
// if T is 'std::vector<int>' T::iterator is 'std::vector<int>::iterator'
// i is the iterator variable name
// find is the algorithm used to first the first occurance of 'x' in the container

template <typename T>
void	easyfind(T container, int x)
{
	typename T::iterator i = std::find(container.begin(), container.end(), x);

	if (i != container.end())
		std::cout << "Int: " << x << " found in container" << std::endl;
	else
		throw std::out_of_range("integer not found in container");
}


#endif

