/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:21:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/20 16:42:21 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &value) : _x(value._x), _y(value._y) {}

Point	&Point::operator=(const Point &value)
{
	(void) value;
	return *this;
}

Point::~Point(){}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	
	// a, b, c vertices of triangle
	// point to check

	
	// return true if point is inside triangle else false

	
}

// ---- getters ---- //
// ret this->_x.toFloat();
// ret this->_y.toFloat();
