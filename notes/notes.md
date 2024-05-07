


************************************************************************

**GENERAL BASIC C++**
**GENERAL BASIC C++**
**GENERAL BASIC C++**

**1**

// always add the constructor and deconstructor in public

Constructor - initializes ovject's data members
Destructor - deletes/frees/ends/removes etc everything at end
Copy Constructor - initializes deep copy of object from default constructor
Copy Assignment Operator - makes a copy of an object assigning one object to another using '=', return a reference to the object '*this', allows chain assignments 'o1=o2=o3'

 Deep Copy:
 - changes made to copied object or internal data won't affect the og
 Shallow Copy:
 - changes made in copied object can affect the og object and the other way around 

**2**

	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
catch(const std::exception &e): This line starts a catch block. In C++, try and catch blocks are used for handling exceptions. When an exception is thrown in the try block, the program looks for a matching catch block to handle it. Here, const std::exception &e is the type and name of the exception being caught. It's saying that if an exception of type std::exception or any derived class of std::exception is thrown, catch it and store it in a variable named e. The const keyword indicates that e cannot be modified within the catch block, and & indicates that e is a reference to the caught exception, which means it doesn't make a copy of the exception, improving performance.

{}: These curly braces enclose the code that will be executed if the specified exception is caught.

std::cerr << e.what() << std::endl;: Inside the catch block, this line prints an error message to the standard error stream (std::cerr). e.what() is a member function of the std::exception class that returns a C-style string (const char*) describing the exception. So, it prints the error message associated with the caught exception. std::endl is used to insert a newline character into the output stream and flush the stream. It ensures that any buffered output is written immediately to the stream.

In simple terms, this code is saying: "If an exception of type std::exception or its derived classes is thrown, catch it and print out the associated error message to the standard error stream." This is a common pattern used for error handling in C++, allowing the program to gracefully handle unexpected errors and provide feedback to the user or developer.


**3**

static function within class = 
	can use function without class object


************************************************************************
**PURE VIRTUAL / ABSTRACT CLASSES WOOOHOOOOOOO**
**PURE VIRTUAL / ABSTRACT CLASSES WOOOHOOOOOOO**
**PURE VIRTUAL / ABSTRACT CLASSES WOOOHOOOOOOO**

- a class is abstract if it hsa at least one put virtual function
- a function WITHOUT a definition

- sometimes, implementation of all functions cannot be provided in a base class because we don't know the implemention...
	this type of base class is called an abstract class

- a pure virtual function (abstract function) is a virtual function for which we can have an implementation, but we override
		it in the derived class, otherwise, the derived class will also become an abstract class. 

- the pure virtual function is declared by assigning 0 in the declaration

- an abstract class' descendants must define the pure citual function, otherwise the subclasses become abstract too by this definition


**INTERFACE vs ABSTRACT CLASS**

An abstract class allows you to create functionality that subclasses can implement or override. An interface only allows you to define functionality, not implement it



**VIRTUAL**
**VIRTUAL**
**VIRTUAL**

- decides which methods to use during execution not compilation...

(hence the extra compiler flags)
	- removes the ambiguity
	- destructors and functions can be virtual
	- constructors cannot be - virtual functions are resolved based on the runtime type of an object, 
	but constructors are called during the construction of an object, before its type is fully determined

	- When you declare a function as "virtual" in the base class, you're saying, "Hey, this function might be redefined in one of the derived classes."
	When you call a virtual function on a base class pointer that's pointing to a derived class object, the function that actually gets called is determined by the type of the object the pointer is pointing to at runtime. This is called "runtime polymorphism".

**EXTRA COMPILER FLAGS**
**EXTRA COMPILER FLAGS**
**EXTRA COMPILER FLAGS**
-Wshadow
Warn whenever a local variable or type declaration shadows another variable, parameter, type, class member (in C++), or instance variable (in Objective-C) or whenever a built-in function is shadowed. Note that in C++, the compiler warns if a local variable shadows an explicit typedef, but not if it shadows a struct/class/enum. If this warning is enabled, it includes also all instances of local shadowing. This means that -Wno-shadow=local and -Wno-shadow=compatible-local are ignored when -Wshadow is used. Same as -Wshadow=global.

-Wno-shadow-ivar (Objective-C only)
Do not warn whenever a local variable shadows an instance variable in an Objective-C method.


**INHERITANCE**
**INHERITANCE**
**INHERITANCE**

	- creating a new class from an existing one
	- derived class/child class/sub class
	- base class/ parent class/super class

	e.g. class bus 	class car 	class truck
	all with the same functions
	could become
	class vehicle - with those functions but just once
	class bus - derived from class vehicle + car + truck

	- syntax:
		class <derived class> : <access specifier (public..)> <base class>
		{
			body
		}
	- if no access specifier given, defaults to private


	- multiple inheritance

**POLYMORPHISM**
**POLYMORPHISM**
**POLYMORPHISM**

	- using the same name for different things
	e.g. many version of a function called 'draw'
		each with different behaviour depending on context
	- draw could draw a circle, it could draw a triangle
		it depends on the object the function is working with

	- in C++ - polymorphism is achieved through inheritance and virtual functions

 **FUNCTION OVERLOADING**
 **FUNCTION OVERLOADING**
 **FUNCTION OVERLOADING**

	add(int 1, int 2);
	AND 
	add(int 1, int 2, int 3)
	first function adds two integers, second adds three
	function with same name and generally doing the same thing but one
	takes more parameters. 

	Function overloading - more than one function with same name but different parameters

**Operator Overloading**
**Operator Overloading**
**Operator Overloading**

 * Operator Overloading:
 * 
 * 		- a compile-time polymorphism
 * 		- gives a special meaning to an existing operator wihtout changing the original meaning
 * 		- e.g. '+' - can be overloaded in the class String so that we can concatenate two strings using this operator '+'
 *		while it's still possible to use it as an addition operator
 * 
 */

// '<<' adding new usage to standard use  to whatever happens in this func
//And add the following function to the Fixed class files:
// •An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter

		**how an operator works for your class**

	'+' adds
	v1 adds(1, 2)
	v2 adds (3, 4)
	v1 + v2 adds the vectors = (4, 6)
	not only adding integers but also vectors..
	


**CPP02- Floats and Fixed point numbers**
**CPP02- Floats and Fixed point numbers**
**CPP02- Floats and Fixed point numbers**

/**
 * Floating point numbers:
 * 
 * 		- big part + small part, computers keep track of numbers that can be super big or super tiny
 * 		- e.g. 123.45, 123 bigs steps with 0.45 as a fraction of a step and use this
 * 			info to calculate a precise location/distance etc.. 
 * 		- this way the big picture and the tiny details are represented in numbers
 *
 * 		- fractional bits represent the part of the number after the decimal point
 * 			e.g. 123.45, '45' is the fractional part
 * 
 *		- watch out with '==' due to inaccuracy
 *		- 4 byte floating point number can actually hold fewer distinct values than a 4 byte integer
 * 
 *		- accuracy vs precision
 *			accuracy - how close to the true value
 *			precision - amount of info about quantity, how uniquely you pinned the value down
 *
 * 		- 2 is 2 is pretty accurate, using these whole numbers I will always get a number that matches the correct answer bit-for-bit
 * 			However, integers lack precision. Dividing both 5 and 4 by 2, for instance, will both yield 2. 
 * 			Integers are unable to keep track of the fractional part, so the information that I had a 
 * 			slightly bigger number than 4 (namely, 5) is lost in the process
 * 
 * 		- https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
 * 			shit to do with the representation + format of floating point numbers..
 * 
 * 		- it is really hard to know when two floats are equal.. '==' tells you if the floats match bit for bit
 * 			but this makes no sense to compare bits when some bits might be incorrect anyway
 * 			results need to be rounded to fit in a finite word
 * 			and if this rounded is done differently than expected, the equality tests might fail
 * 
 * 		- numerical overflow - adding one to largest possible unsigned integer will give zero.
 * 		- can use floats for checking overflow in integer math, calculate in floating point, then compare result to e.g. INT_MAX, 
 * 			then cast back to integer
 * 		- but becareful casting... our float might not have enough precision to preserve an entire integer
 * 			A 32-bit integer can represent any 9-digit decimal number, but a 32-bit float only offers about 7 digits of precision
 * 
 * 
 * Fixed point numbers:
 * 
 * 		- a certain number of digits are reserved for the fractional part of the number and the rest the interger part
 *		- the position of the decimal point doesn't change (floating point numbers it does)
 * 		- helpful when you want predictable precision but don't want to deal with really large or really tiny numbers
 * 
 * 

************************************************************************
**CPP02 AND BEYOND**
**CPP02 AND BEYOND**
**CPP02 AND BEYOND**

From now on, all your classes must be designed in the **Orthodox Canonical Form**,
unless explicitely stated otherwise. Then, they will implement the four required member
functions below:

	•Default constructor
	•Copy constructor
	•Copy assignment operator
	•Destructor

Split your class code into two files. The header file (.hpp/.h) contains the class
definition whereas the source file (.cpp) contains the implementation.


**************************************************************************
**RANDOM FROM EXERCISES**
**RANDOM FROM EXERCISES**
**RANDOM FROM EXERCISES**

**CPP04-EX03**
Interfaces don’t exist in C++98 (not even in C++20). However, pure abstract classes 
are commonly called interfaces. Thus, in this last exercise, let’s try to implement inter-
faces in order to make sure you got this module.

Complete the definition of the following AMateria class and implement the necessary
member functions.

class AMateria
{
	protected:
	[...]
	public:
	AMateria(std::string const & type);
	[...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

C++ - Module 04 Subtype polymorphism, abstract classes, interfaces
Implement the Materias concrete classes Ice and Cure. Use their name in lower-
case ("ice" for Ice, "cure" for Cure) to set their types. Of course, their member function
clone() will return a new instance of the same type (i.e., if you clone an Ice Materia,
you will get a new Ice Materia).

The use(ICharacter&) member function will display:
•Ice: "* shoots an ice bolt at <name> *"
•Cure: "* heals <name>’s wounds *"

<name> is the name of the Character passed as parameter. Don’t print the angle
brackets (< and >).

While assigning a Materia to another, copying the type doesn’t make
sense.

Write the concrete class Character which will implement the following interface:

class ICharacter
{
	public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

The Character possesses an inventory of 4 slots, which means 4 Materias at most.
The inventory is empty at construction. They equip the Materias in the first empty slot
they find. This means, in this order: from slot 0 to slot 3. In case they try to add
a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything
(but still, bugs are forbidden). The unequip() member function must NOT delete the
Materia!

Handle the Materias your character left on the floor as you like.
Save the addresses before calling unequip(), or anything else, but
don’t forget that you have to avoid memory leaks.

The use(int, ICharacter&) member function will have to use the Materia at the
slot[idx], and pass the target parameter to the AMateria::use function.

C++ - Module 04 Subtype polymorphism, abstract classes, interfaces
Your character’s inventory will be able to support any type of
AMateria.

Your Character must have a constructor taking its name as a parameter. Any copy
(using copy constructor or copy assignment operator) of a Character must be deep.
During copy, the Materias of a Character must be deleted before the new ones are added
to their inventory. Of course, the Materias must be deleted when a Character is destroyed.

Write the concrete class MateriaSource which will implement the following interface:

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

•learnMateria(AMateria*)
Copies the Materia passed as a parameter and store it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique.

•createMateria(std::string const &)
Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.

In a nutshell, your MateriaSource must be able to learn "templates" of Materias to
create them when needed. Then, you will be able to generate a new Materia using just
a string that identifies its type.


**CPP01-EX05/6**

 function: complain()
// array of member function pointers + array of level strings
// check level to string, call matching


**CPP01-EX00**

	Allocate on the Heap:
	- Use 'new' and 'delete' like malloc but waaaay nicer
	- Heap-allocated objects have longer lifetime and exist until deleted by programmer


	Allocate on the Stack:
	- Stack-allocated objects same as C really 
	- Shorter lifetime, limited to the scope in which they are defined
	- When the scope ends (function returns), 
	the stack-allocated objects are automatically destroyed. 

**// CPP00 ex02**

. Compiling tests.cpp reveals that
the missing file is Account.cpp.

**// CPP00 ex01**

/**
 * classes:
 * 
 * Phonebook
 * - array of Contacts
 * - store max 8 Contacts (if 9, replace oldest with newest)
 * 
 * 
 * Contact
 * - phonebook Contact
 * 
 * 
 * 
 * ??
 * In your code, the phonebook must be instantiated as an instance of the PhoneBook 
 * class. Same thing for the Contacts. Each one of them must be instantiated as an instance
 * of the Contact class
 * 
 * ADD SEARCH EXIT
*/

************************************************************************

-----------Shit from Mr Kenny ---------------------
-----------Shit from Mr Kenny ---------------------
-----------Shit from Mr Kenny ---------------------
-----------Shit from Mr Kenny ---------------------

void	veggie::throw_potato_at_child_face(int amount_speed)
{
	for(int i = 0  ; i < amount_speed ; i++)
		std::cout << "child screaming of pain, yay " << i << std::endl;
}

veggie::veggie() : _type("potato thingy"), oink(3)
{
	std::cout << "i like" << std::endl;
}

veggie::~veggie()
{
	std::cout << "i kaboom" << std::endl;
}
int veggie::getoink()
{
	return (oink);
}

int main()
{
	veggie *bob = new veggie;

	bob->throw_potato_at_child_face(24);
	bob->throw_potato_at_child_face(bob->getoink());

	// bob->~veggie();
	delete bob;
}

class veggie
{
	private:
		std::string _type;
		int oink;
	public:
		veggie();
		~veggie();
	
	int getoink();
	void throw_potato_at_child_face(int amount_speed);	
};

