/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:20:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 17:37:35 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Point.hpp"

/**
 *	binary space partitioning - split everything up into small sections
 * 	these sections can be organised and handled to easily to see 
 * 	what is in each section
 * 	a way to manage nad navigate through spaces efficiently
 * 
 * A = (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|
 * 
 */
static float	getArea(const Point &a, const Point &b, const Point &c)
{
	float	area;
	float	a1;
	float	a2;
	float	a3;
	
	a1 = a.getX() * (b.getY() - c.getY());
	a2 = b.getX() * (c.getY() - a.getY());
	a3 = c.getX() * (a.getY() - b.getY());

	area = a1 + a2 + a3;
	area /= 2;
	if (area < 0)
		area *= -1;
	return area;
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

	if (mainTri == abTri + bcTri + caTri)
		return true;
	return false;
}
