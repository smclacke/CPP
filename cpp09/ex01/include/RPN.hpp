/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/05 15:52:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/05 17:46:32 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <cctype>
# include <algorithm>
# include <stack>

// define ops?


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

