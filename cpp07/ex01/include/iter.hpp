/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:08:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 22:12:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// third parameter can be an instantiated function template
template <typename TT>
TT	funck(TT param)
{
	if (param)
		std::cout << "param found" << std::endl;
	return param;
}


// address of array | length of array | function
template <typename T, typename TT>
void	iter(T &array, int len, TT funck(TT param))
{
	for (int i = 0; i < len; i++)
		funck(array[i]);
}


#endif

