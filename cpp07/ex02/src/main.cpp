/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 17:05:54 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 17:05:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Array.hpp"

int	main()
{
	// default 
	Array<char>			charArray;
	std::cout << "Char Array size = " << charArray.size() << std::endl;

	try
	{
		std::cout << "Element [0] = " << charArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}



	std::cout << std::endl << std::endl;
	
	

	// int array of size 4
	Array<int>			intArray(4);
	
	try
	{
		unsigned int	size = intArray.size();
		std::cout << "Int Array size  = " << size << std::endl; 

		unsigned int j = 42;
		for (unsigned int i = 0; i < size; i++)
		{
			intArray[i] = j++;
			std::cout << "Element[" << i << "] = " << intArray[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		intArray[4] = 47;  // out of bounds
		intArray[20] = 42; // out of bounds
		intArray[-2] = 42; // out of bounds
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}



	std::cout << std::endl << std::endl;

	

	// making a copy of the int array with copy constructor
	Array<int>	intArray2(intArray);

	
	unsigned int	sizeArray2 = intArray2.size();
	std::cout << "int array copy size = " << sizeArray2 << std::endl;

	try
	{
		std::cout << "int array copy element [2] = " << intArray2[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	
	std::cout << std::endl << std::endl;

	

	// making a copy of the int array with copy assignment operator
	Array<int>	intArray3 = intArray2;

	
	unsigned int	sizeArray3 = intArray3.size();
	std::cout << "int array copy size = " << sizeArray3 << std::endl;

	try
	{
		std::cout << "int array copy element [3] = " << intArray3[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	
	// modifying copy arrays without changing the ogs

	try
	{
		intArray3[1] = 666;
		std::cout << "array3 element [1] = " << intArray3[1] << std::endl;
		std::cout << "array2 element [1] = " << intArray2[1] << std::endl;
		intArray2[1] = 4242;
		std::cout << "array2 element [1] = " << intArray2[1] << std::endl;
		std::cout << "OG array element [1] = " << intArray[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	

	
	std::cout << std::endl << std::endl;
	


	// trying to make a copy from one data type to a different data type won't compile
	// Array<char> charArray2(intArray2);
	// Array<char>	charArray3 = intArray2;



	// string array of size 10	
	Array<std::string>		strArray(10);
	
	try
	{
		unsigned int	size = strArray.size();
		std::cout << "String Array size = " << size << std::endl;

		std::string	strings[10] = {"ten", "strings", "in", "an", "array", "is", "many", "words", "in", "one"};

		for (unsigned int i = 0; i < size; i++)
		{
			strArray[i] = strings[i];
			std::cout << "Element [" << i << "] = " << strArray[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		strArray[42] = "wrong index";  // out of bounds
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}
