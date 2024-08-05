/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/31 13:22:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/05 18:08:12 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/RPN.hpp"

// exceptions

const char*	invalidString::what() const throw()
{
	return "Error: invalid string input";
}

const char*	stackIssues::what() const throw()
{
	return "Error: invlaid input";
}

const char*	infinityIssues::what() const throw()
{
	return "Error: dividing by 0 isn't a good idea...";
}


// utils

static int	validOp(int c)
{
	return (c == '-' || c == '+' || c == '/' || c == '*');
}

static int	validInt(int c)
{
	return (c >= '0' && c <= '9');
}

static int	validString(std::string str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!validInt(str[i]) && !validOp(str[i]) && !isspace(str[i]))
			return 0;
	}
	return 1;
}


// methods

static int	doCalc(std::stack<int> &stackRPN, char op)
{
	int	first;
	int	second;

	if (stackRPN.size() < 2)
		throw stackIssues();
	second = stackRPN.top();
	stackRPN.pop();
	first = stackRPN.top();
	stackRPN.pop();

	if (op == '/' && second == 0)
		throw infinityIssues();

	switch (op)
	{
		case '-':
			return first - second;
		case '+':
			return first + second;
		case '/':
			return first / second;
		case '*':
			return first * second;
		default:
			throw stackIssues();
	}

}

void	resultRNP(std::string str)
{
	std::stack<int>		stackRPN;
	int					result;

	if (str.empty())
		throw invalidString();
	if (!validString(str))
		throw invalidString();

	for (size_t i = 0; str[i]; i++)
	{
		if (isspace(str[i]))
			continue ;
		if (validInt(str[i]))
			stackRPN.push(str[i] - '0');
		else if (validOp(str[i]))
			stackRPN.push(doCalc(stackRPN, str[i]));
	}

	if (stackRPN.size() == 0 || stackRPN.size() > 2)
		throw stackIssues();

	result = stackRPN.top();
	std::cout << "Result: " << result << std::endl;
}
