/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/21 16:44:05 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/31 13:30:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MutantStack.hpp"


// The std::stack class is a container adaptor that gives the programmer the 
// functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.

// The class template acts as a wrapper to the underlying container - 
// only a specific set of functions is provided. The stack pushes and pops the element 
// from the back of the underlying container, known as the top of the stack.

// initial output:
// 17
// 1
// 5
// 3
// 5
// 737
// 0


int	main()
{
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " --- from subject PDF --- " << std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl; // top = 17

	mstack.pop(); // removes 17

	std::cout << mstack.size() << std::endl; // size = 1 (with only element 5)

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl; // iterating through elements
		++it;
	}

	std::stack<int> s(mstack);


	std::cout << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " --- replace with list to get the same output --- " << std::endl;
	
// using std::list here means the correct container operations need to be called - push_back()
// and pop_back()
// if using MutantStack<std::list>, std::stack will translate for us after detecting
// the underlying container

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << list.back() << std::endl; // top (back for list) = 17

	list.pop_back(); // removes 17

	std::cout << list.size() << std::endl; // size = 1 (with only element 5)

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);

	list.push_back(0);

	std::list<int>::iterator itList = list.begin();
	std::list<int>::iterator iteList = list.end();

	++itList;
	--itList;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl; // iterating through elements
		++itList;
	}
	
	std::list<int> sList(list);


	std::cout << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " --- specify list container to get the same output --- " << std::endl;
	
// push() can be used since std::stack defines 'push' and 'pop' methods
// they internally call the corresponding operations of the underlying container
// in this case, std::stack translates 'push' and 'pop' to the corresponding
// std::list operations

	MutantStack<int, std::list<int>> mutantList;

	mutantList.push(5);
	mutantList.push(17);

	std::cout << mutantList.top() << std::endl; // top = 17

	mutantList.pop(); // removes 17

	std::cout << mutantList.size() << std::endl; // size = 1 (with only element 5)

	mutantList.push(3);
	mutantList.push(5);
	mutantList.push(737);

	mutantList.push(0);

	MutantStack<int, std::list<int>>::iterator itMList = mutantList.begin();
	MutantStack<int, std::list<int>>::iterator iteMList = mutantList.end();

	++itMList;
	--itMList;
	while (itMList != iteMList)
	{
		std::cout << *itMList << std::endl; // iterating through elements
		++itMList;
	}


	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;


	// if no container specified, redault deque is used, both objects below are the same
	MutantStack<char>	charStack;
	// MutantStack<char, std::deque<char>>	charStack;

	charStack.push('a');
	charStack.push('b');
	charStack.push('c');

	charStack.printValues();
	charStack.printStats();	

	charStack.pop();
	charStack.push('d');
	charStack.push('e');
	charStack.push('f');
	charStack.push('g');

	std::cout << std::endl;
	charStack.printValues();
	charStack.printStats();	
	
		
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;

	MutantStack<int, std::vector<int>>	newStack;

	newStack.push(1);
	newStack.push(11);
	newStack.push(21);

	newStack.printValues();
	newStack.printStats();
	
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;

	MutantStack<std::string, std::list<std::string>>	strList;

	strList.push("first");
	strList.push("second");
	strList.push("third");


	std::cout << std::endl;
	strList.printValues();
	strList.printStats();	

	strList.pop();
	strList.pop();

	strList.push("something");
	strList.push("new");

	std::cout << std::endl;
	strList.printValues();
	strList.printStats();
		
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;



	// The standard containers std::vector (including std::vector<bool>), std::deque and std::list satisfy
	// these requirements (std::stack requirements). By default, if no container class is specified for a particular stack class instantiation, 
	// the standard container std::deque is used.
	// does not work since std::array has a fixedsizestack (not dynamic like vector and deque)
	// MutantStack<int, std::array<int, 5>>	intArray;
	
	// intArray.push(34);
	// intArray.push(34);
	// intArray.push(34);
	// intArray.push(34);
	// intArray.push(34);

	// std::cout << std::endl;
	// intArray.printValues();
	// intArray.printStats();	

	
	return 0;
}

