/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/21 16:46:25 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/21 17:37:34 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <stack>
# include <deque>
# include <list>

template <class T, class Container = std::deque <T>>
class MutantStack : public std::stack<T, Container>
{

	public:
		MutantStack() : std::stack<T, Container>() {}; // default
		~MutantStack() {}; // destructor
		
		MutantStack(const std::stack<T> &value) : std::stack<T>(value) {}; // param constructor

		MutantStack(const MutantStack &copy) // copy
		{
			*this = copy;
		}
		
		MutantStack<T>		&operator=(const MutantStack<T> &copy) // copy assignment operator
		{
			if (this != &copy)
				this->c = copy.c; // std::stack container attribute c
			return *this;
		}

		// methods | iterators
		using iterator = typename
		std::stack<T>::container_type::iterator;
		
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}


		void	printValues()
		{
			
		}

};




#endif
