/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:21:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 15:22:46 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Point.hpp"

// inits private attributes of Point x and y to 0
Point::Point() : _x(0), _y(0) {}

// creates new objects copying the default constructor
Point::Point(const Point &value) : _x(value._x), _y(value._y) {}

 // X Y copy constructor
Point::Point(const float x, const float y) : _x(x), _y(y) {}

// makes deep copy of one object, assigning one Point obj to another '='
// don't need value in this case
Point	&Point::operator=(const Point &value)
{
	(void)	value;

	return *this;
}

Point::~Point(){}

// ---- getters ---- //
float	Point::getX() const
{
	return this->_x.toFloat();
}

float	Point::getY() const
{
	return this->_y.toFloat();
}
