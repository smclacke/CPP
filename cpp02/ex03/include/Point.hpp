/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:21:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 15:22:53 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point();									// Dafult constructor
		Point(const Point &value);					// Copy constructor
		Point(const float x, const float y);		// XY constructor
		Point	&operator=(const Point &value);		// Copy assignment operator
		~Point();									// Destructor

		// getters
		float	getX() const;
		float	getY() const;

};


bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif

