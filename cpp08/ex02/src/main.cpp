/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/21 16:44:05 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/21 17:36:39 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MutantStack.hpp"


// If you run it a first time with your MutantStack, and a second time replacing the
// MutantStack with, for example, a std::list, the two outputs should be the same. Of
// course, when testing another container, update the code below with the corresponding
// member functions (push() can become push_back()

int	main()
{
	
	//// from subject pdf
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl; // top = 17

	mstack.pop(); // removes 17
	std::cout << mstack.size() << std::endl; // size = 1 (with only 5)

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it; // showing we can do this?
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl; // iterating through elements
		++it;
	}
	std::stack<int> s(mstack); // what are you??

	//// from subject pdf

	std::cout << std::endl << std::endl;


	MutantStack<char>	charStack;

	charStack.push('a');
	charStack.push('b');
	charStack.push('c');

	std::cout << "top = " << charStack.top() << " size = " << charStack.size() << std::endl;

	charStack.pop();
	charStack.push('d');
	charStack.push('e');
	charStack.push('f');
	charStack.push('g');

	std::cout << "top = " << charStack.top() << " size = " << charStack.size() << std::endl;

	charStack.pop();
	charStack.pop();
	charStack.pop();

	

	return 0;
}

// initial output:
// 17
// 1
// 5
// 3
// 5
// 737
// 0
