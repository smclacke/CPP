/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/05 15:52:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 16:23:44 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <cctype>
# include <algorithm>
# include <stack>


// methods
void	resultRNP(std::string str);


// exceptions
class	invalidString : public std::exception
{
	public:
		const char *what() const throw();
};

class	stackIssues : public std::exception
{
	public:
		const char *what() const throw();
};

class	infinityIssues : public std::exception
{
	public:
		const char *what() const throw();
};


#endif

