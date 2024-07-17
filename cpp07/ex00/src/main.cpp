/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/11 20:08:23 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 16:40:53 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	


	////////// extra

	std::cout << std::endl << std::endl;

	float	f1 = 0.4f;
	float	f2 = 42.4f;
	
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	
	::swap(f1, f2);
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;

	std::cout << std::endl << std::endl;

	char	f = 'f';
	char	p = 'p';

	std::cout << "f = " << f << ", p = " << p << std::endl;
	::swap( f, p );
	std::cout << "f = " << f << ", p = " << p << std::endl;
	
	std::cout << "min( f, p ) = " << ::min( f, p ) << std::endl;
	std::cout << "max( f, p ) = " << ::max( f, p ) << std::endl;
	


	return 0;
}


// Should output:
// a = 3, b = 2
// min(a, b) = 2
// max(a, b) = 3
// c = chaine2, d = chaine1
// min(c, d) = chaine1
// max(c, d) = chaine2

