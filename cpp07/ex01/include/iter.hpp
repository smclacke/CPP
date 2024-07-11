/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:08:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 21:27:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// third parameter can be an instantiated function template
template <typename T>
T	func(T param)
{
	if (param != NULL)
		return 1;
	return 0;
}


template <typename T>
void	iter(T &array, T len, T func) // address of array | length of array | function
{
	for (int i = 0; array[i]; i < len; i++)
	{
		::func(array[i]);
	}
}


#endif

