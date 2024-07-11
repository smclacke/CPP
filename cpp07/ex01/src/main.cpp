/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 21:07:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 22:13:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/iter.hpp"

int	main()
{

	int	array[] = {1, 4};

	::iter(array, static_cast<int>(sizeof(array)), funck(array));

	return 0;
}
