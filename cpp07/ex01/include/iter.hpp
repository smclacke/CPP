/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:08:50 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 16:41:53 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename TT>
void	funkyT(TT &param)
{
	std::cout << param;
}

template <typename T, typename size_t, typename TT>
void	iter(T *array, size_t len, TT funkyT)
{
	for (size_t i = 0; i < len; i++)
		funkyT(array[i]);
}


#endif

