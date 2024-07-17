/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 20:11:19 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 16:39:13 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T z = x;
	x = y;
	y = z;
}

template <typename T>
T		min(T x, T y)
{
	return x < y ? x : y;
}

template <typename T>
T		max(T x, T y)
{
	return x > y ? x : y;
}


#endif

