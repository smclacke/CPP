/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 17:28:06 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/30 15:45:21 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/easyfind.hpp"

// - '::' - refers to the scope resolution
// in this case, it is global (we dont have a class)
// if there was a class we could do Class::method

int	main()
{

	std::cout << "------- integer vector ------" << std::endl;

	int	x = 8;
	int	y = 18;
	int	z = 7;
	int	a = 3;
	std::vector<int> intVec = {41, 7, 65, 2, 8, 100, 33};

	try
	{
		::easyfind(intVec, x);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		::easyfind(intVec, y);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intVec, z);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intVec, a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << std::endl;


	std::cout << "------- integer list ------" << std::endl;

	int	b = 4;
	int	c = 3;
	int	d = 2;

	std::list<int> intList = {6, 6, 6, 2, 6};

	try
	{
		::easyfind(intList, b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intList, c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intList, d);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	std::cout << "------- integer array ------" << std::endl;

	int	p = 100;
	int	q = 120;
	int	r = 89;
	int	s = 4;

	std::array<int, 5>	intArray = {6, 4, 2, 5, 89};
	
	try
	{
		::easyfind(intArray, p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intArray, q);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intArray, r);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		::easyfind(intArray, s);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}

