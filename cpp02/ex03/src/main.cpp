/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 22:21:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 19:56:35 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

// implement a function which indicates whether a point is inside a triangle or not
int main( void )
{
	Point	tri[3] = {Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f)};

	Point	point(0.1f, 0.4f);
	Point	point1(0.0f, 0.0f);
	Point	point2(5.1f, 0.0f);
	Point	point3(0.1f, -0.4f);
	
	tri[0].getX();
	tri[0].getY();

	tri[1].getX();
	tri[1].getY();
	
	tri[2].getX();
	tri[2].getY();
	
	point.getX();
	point.getY();


	if (bsp(tri[0], tri[1], tri[2], point))
		std::cout << "Point is inside triangle yay" << std::endl;
	else
		std::cout << "Point is outside triangle oh no!" << std::endl;
		
	if (bsp(tri[0], tri[1], tri[2], point1))
		std::cout << "Point1 is inside triangle yay" << std::endl;
	else
		std::cout << "Point1 is outside triangle oh no!" << std::endl;
	
	if (bsp(tri[0], tri[1], tri[2], point2))
		std::cout << "Point2 is inside triangle yay" << std::endl;
	else
		std::cout << "Point2 is outside triangle oh no!" << std::endl;
		
	if (bsp(tri[0], tri[1], tri[2], point3))
		std::cout << "Point3 is inside triangle yay" << std::endl;
	else
		std::cout << "Point3 is outside triangle oh no!" << std::endl;
		
		
	return 0;
}
