/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/21 16:44:05 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/30 14:30:16 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MutantStack.hpp"

int	main()
{
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " --- from subject PFD --- " << std::endl;
	
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
	std::cout << mstack.top() << std::endl; // top = 0

	std::stack<int> s(mstack);


	std::cout << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << " --- replace with list to get the same output --- " << std::endl;
	

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

	std::list<int>::iterator itMList = mutantList.begin();
	std::list<int>::iterator iteMList = mutantList.end();

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


	MutantStack<char>	charStack;

	charStack.push('a');
	charStack.push('b');
	charStack.push('c');

	charStack.printValues();
	std::cout << "top = " << charStack.top() << " size = " << charStack.size() << std::endl;

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

	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::endl;

	

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
