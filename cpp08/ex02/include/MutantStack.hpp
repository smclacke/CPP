/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/21 16:46:25 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/30 16:00:46 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <vector>
# include <deque>
# include <list>
# include <array>

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
		std::stack<T, Container>::container_type::iterator;

		iterator	begin()
		{
			return this->c.begin();
		}

		iterator	end()
		{
			return this->c.end();
		}

		void	printValues()
		{
			iterator	it;

			for (it = this->c.begin(); it != this->c.end(); ++it)
				std::cout << *it << std::endl;
		}

		void	printStats()
		{
			std::cout << "top/back = [" << this->c.back() << "] | ";
			std::cout << "front = [" << this->c.front() << "] | ";
			std::cout << "size = [" << this->c.size() << "] " << std::endl;
		}
};


#endif
