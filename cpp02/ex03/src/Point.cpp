/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:21:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/18 20:47:08 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y)

Point::Point(const Point &value) : _x(value._x), _y(value._y) {}

Point	&Point::operator=(const Point &value)
{
	(void) value;

	return *this;
}

Point::~Point(){}

// ---- getters ---- //
// ret this->_x.toFloat();
// ret this->_y.toFloat();