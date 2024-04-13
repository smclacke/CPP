**CPP01-EX00**

	Allocate on the Heap:
	- Use 'new' and 'delete' like malloc but waaaay nicer
	- Heap-allocated objects have longer lifetime and exist until deleted by programmer


	Allocate on the Stack:
	- Stack-allocated objects same as C really 
	- Shorter lifetime, limited to the scope in which they are defined
	- When the scope ends (function returns), 
	the stack-allocated objects are automatically destroyed. 



**GENERAL BASIC C++**

**1**
// always add the constructor and deconstructor in public
class PhoneBook
{
	private:


	public:
		PhoneBook();
		~PhoneBook();
}

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

