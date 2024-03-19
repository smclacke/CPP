

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


// always add the constructor and deconstructor in public
class PhoneBook
{
	private:
		// Contact class - IS an array of Contacts
	public:
		PhoneBook();
		~PhoneBook();
}



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

