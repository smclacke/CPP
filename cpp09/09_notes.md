
**CPP09:**

*bitcoin :*

database format CSV (fields/columns separated by comma character and records/rows terminated by newlines)

database representing bitcoin price over time


program takes as input a second database, storing the different prices/ dates to evaluate

program rules:

	- name is btc
	- take file as argument
	- format : "data | value"
	- valid date will always be in the following format : Year-Month-Day
	- float / positive integer between 0 and 1000
	- error message on std out

	- program will use the value in your input file
	- program should display on standard output the result of the value multiplied by the exchange rate according to the date indicated in your database

	~ if date used in input does not exist in your DB then use the closest date contained in your DB, use lower date not uppper one 


----------------------------------------------------------------


*RPN :*

program rules:

	- name is RPN
	- takes an inverted Polish mathematical expression as an argument
	- numbers used in this operation and passed as arguments will always be less than 10, calculation itself but also result do not take into account this rule
	- must process this expression and output the correct result on the standard output
	- error message on std out
	- must handle operations with these tokens: "+ - / *"
	- do not need to manage brackets or decimal numbers


----------------------------------------------------------------

*PmergeMe :*

program rules:

	- name PmergeMe
	- must be able to use positive integer sequence as argument
	- use merge-insert sort algorithm to sort the positive integer sequence
	- need to use Ford-JOhnson algorithm
	- errors on std out
	- use two different containers
	- handle at least 3000 different integrs

	- strongly advised to implement your algorithm for each container 
		avoiding using a generic function

	- first line you must display explicit text followed by unsorted positive integer sequence
	- second line display explicit text followed by unsorted positive integer sequence
	- third line distplay explicit text indication the time used by your algorithm by specifying the first container used to sort the positive integer sequence

	- format for display of the time used to carry out your sorting is free but the precision chosen must allow to clearly see the difference between two containers used

	~ indication of time is deliberately strange in PDF example
		must indicate time used to perform all your operations, both sorting part and data management part

	~ management of errors related to duplicated is left to your discretion

	~ containers used previously are forbidden



----------------------------------------------------------------
**----------- in human  -----------**

from: https://medium.com/@sofia.huppertz/cpp09-school42-1efa42df7803


*Bitcoin*

- parsing and storing a database (Bitcoin historical exchange rate) inside a std::map
- extracting the necessary data based on the input passed down to the program
- use classes

std::map :

	- a sorted associative container that contains key-value pairs with unique keys
	- keys are sorted by using 'Compare' comparison function
	- Search, removal and insertion operations have logarithmic complexity
	- maps are implemented as Red-Black tress (self-balancing binary search tree data structure)


