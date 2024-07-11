/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/09 22:15:57 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/11 17:59:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Base.hpp"

// randomly instanciates A, B or C and returns the instance as a Base pointer
Base	*generate(void)
{
	switch (rand() % 3)
	{
		case 0:
		{
			std::cout << "Random instance of A created" << std::endl;
			return new A;
		}
		case 1:
		{
			std::cout << "Random instance of B created" << std::endl;
			return new B;
		}
		case 2:
		{
			std::cout << "Random instance of C created" << std::endl;
			return new C;
		}
		default:
			return NULL;
	}
}


// prints actual type of object pointed to by p: 'A', 'B' or 'C'
void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointy class A object identified" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointy class B object identified" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointy class C object identified" << std::endl;
	else
		std::cout << "No known pointy class object identified" << std::endl;
}


// prints actual type of object pointed to by p: 'A', 'B' or 'C'
// using a pointer inside this function is forbidden 
void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Referency class A object identified" << std::endl;
	}
	catch(const std::bad_cast &e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Referency class B object identified" << std::endl;
		}
		catch(const std::bad_cast &e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "Referency class C object identified" << std::endl;
			}
			catch(const std::bad_cast &e)
			{
				std::cout << "No known referency class object identified" << std::endl;
			}
		}
	}
}
