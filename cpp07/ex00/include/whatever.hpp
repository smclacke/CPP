/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 20:11:19 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 21:06:51 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

// swap: Swaps the values of two given arguments. Does not return anything

// min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one

// max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one


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

