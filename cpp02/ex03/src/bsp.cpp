/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:20:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 15:24:44 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Point.hpp"

/**
 *	binary space partitioning - split everything up into small sections
 * 	these sections can be organised and handled to easily to see 
 * 	what is in each section
 * 	a way to manage nad navigate through spaces efficiently
 */

static float	getArea(const Point &a, const Point &b, const Point &c)
{
	float	area;
	
	area = a.getX() * (b.getY() - c.getY());
	area += b.getX() * (c.getY() - a.getY());
	area += c.getX() * (a.getY() - b.getY());

	// if (area < 0)
	// 	area *= -1;

	return area / 2;
}

/**
 *  a, b, c vertices of triangle
 * 	point = point to check if inside triangle
 * 	return true if point is inside triangle else false
 * 	calcualte areas of main triangle and three sub-triangles
 * 	if point is inside triangle, 
 * 	it should be on the same side for each sub-triangle
 * 	if all areas are positive, the point is therefore on the same 
 * 	side of each edge and therefore inside the triangle
 */
bool bsp(Point const a, Point const b, Point const c, Point const point)
{

	const float	mainTri = getArea(a, b, c);
	const float	abTri = getArea(point, a, b);
	const float	bcTri = getArea(point, b, c);
	const float	caTri = getArea(point, c, a);

	if (mainTri > 0 && abTri > 0 && bcTri > 0 && caTri > 0)
		return true;
	return false;

	
}
