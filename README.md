# CPP Modules 00-09

*Introduction to C plus plus*

Each module introduces fundamental and advanced C++ concepts through practical exercises.

---

## Module 00: Namespaces, Classes & Member Functions

### Key Concepts
- **Namespaces**: Organizing code and avoiding name conflicts
- **Classes & Objects**: Encapsulation and object-oriented design
- **Member Functions**: Methods within classes
- **Access Specifiers**: public, private, protected
- **Constructors & Destructors**: Object lifecycle management

### Learning Objectives
- Understand the basic structure of C++ classes
- Create and instantiate objects
- Use member functions to manipulate object state
- Practice input/output operations

### Exercises
- **ex00**: Megaphone - String manipulation with namespaces
- **ex01**: PhoneBook - Class design with Contact and PhoneBook classes
- **ex02**: The Four Inescapable Laws of Object-Oriented Programming - Static methods and member variables

---

## Module 01: Memory Allocation, Pointers & References

### Key Concepts
- **Memory Allocation**: `new` and `delete` operators
- **Pointers**: Understanding and manipulating memory addresses
- **References**: Safe alternatives to pointers
- **String Manipulation**: Working with C++ strings
- **Memory Management**: Preventing memory leaks

### Learning Objectives
- Master pointer and reference semantics
- Practice dynamic memory allocation
- Understand the stack vs. heap
- Implement proper cleanup of allocated memory

### Exercises
- **ex00**: BraiiiiiiinnnzzzZ - Creating and managing zombie objects
- **ex01**: Moar brainz - Arrays of dynamically allocated objects
- **ex02**: HI THIS IS BRAIN - Demonstrating pointers and references
- **ex03**: Unnecessary violence - Using references with weapon and human classes
- **ex04**: Sed is for losers - File manipulation and string replacement
- **ex05/ex06**: Harl 2.0 & Harl filter - String parsing and function switching

---

## Module 02: Ad-hoc Polymorphism, Operator Overloading & Orthodox Canonical Form

### Key Concepts
- **Operator Overloading**: Redefining operators for custom types
- **Orthodox Canonical Form**: Proper class structure (constructor, copy constructor, assignment operator, destructor)
- **Fixed-Point Arithmetic**: Alternative to floating-point representation
- **Const Correctness**: Using const to ensure data integrity
- **Comparison Operators**: `<`, `>`, `==`, etc.

### Learning Objectives
- Implement operator overloading correctly
- Understand the rule of four (constructor, destructor, copy constructor, copy assignment)
- Work with fixed-point numbers for precise calculations
- Practice const-correctness in class design

### Exercises
- **ex00**: Fixed Point Numbers - Introduction to operator overloading
- **ex01**: Towards a more useful fixed-point number - Arithmetic operators
- **ex02**: Now we are talking - Comparison and stream insertion operators
- **ex03**: BSP (Binary Space Partitioning) - Geometric calculations with fixed-point numbers

---

## Module 03: Inheritance

### Key Concepts
- **Base and Derived Classes**: Class hierarchy
- **Access Modifiers in Inheritance**: public, private, protected inheritance
- **Method Overriding**: Redefining base class methods
- **Constructors in Inheritance**: Proper initialization chains
- **Virtual Functions**: Introduction to polymorphism

### Learning Objectives
- Design hierarchies of related classes
- Understand initialization order in inheritance
- Practice method overriding
- Learn when to use inheritance vs. composition

### Exercises
- **ex00**: Aaaaand... OPEN!
- **ex01**: Serena's Seduction
- **ex02**: Properties of inheritance
- **ex03**: Virtual functions and abstract classes

---

## Module 04: Subtype Polymorphism, Virtual Functions & Abstraction

### Key Concepts
- **Virtual Functions**: Runtime polymorphism
- **Abstract Classes**: Classes that cannot be instantiated
- **Pure Virtual Functions**: Interface definition
- **Polymorphic Behavior**: Different implementations for the same interface
- **Slicing Prevention**: Proper use of pointers and references

### Learning Objectives
- Implement true polymorphism with virtual functions
- Design abstract interfaces
- Create extensible class hierarchies
- Understand vtables and dynamic dispatch

### Exercises
- **ex00**: Polymorphism
- **ex01**: I don't want to set the world on fire
- **ex02**: Abstract class & interface
- **ex03**: Interface & recap

---

## Module 05: Repetition and Exceptions

### Key Concepts
- **Exception Handling**: `try`, `catch`, `throw`
- **Standard Exceptions**: Exception hierarchy
- **Custom Exceptions**: Creating domain-specific exceptions
- **Resource Management**: RAII (Resource Acquisition Is Initialization)
- **Exception Safety**: Guaranteeing behavior under error conditions

### Learning Objectives
- Implement robust error handling
- Design custom exception classes
- Practice RAII principles
- Write exception-safe code

### Exercises
- **ex00**: Mommy, when I grow up, I want to be a PDF reader
- **ex01**: Repetition
- **ex02**: The Heirs
- **ex03**: Now it's weird!

---

## Module 06: Casts in C++

### Key Concepts
- **Type Casting**: Converting between types
- **`static_cast`**: Safe casts at compile-time
- **`dynamic_cast`**: Runtime polymorphic casts
- **`reinterpret_cast`**: Low-level memory reinterpretation
- **`const_cast`**: Removing const qualifier
- **C-style vs C++ casts**: Why C++ casts are safer

### Learning Objectives
- Understand different casting mechanisms
- Know when to use each cast type
- Practice safe type conversion
- Recognize dangerous casting patterns

### Exercises
- **ex00**: The Scalar Conversion
- **ex01**: Identify real type
- **ex02**: The dangerous conversion

---

## Module 07: Templates

### Key Concepts
- **Function Templates**: Generic functions
- **Class Templates**: Generic classes
- **Template Specialization**: Partial and full specialization
- **Template Parameters**: Types, non-type, and template parameters
- **Instantiation**: How templates are compiled

### Learning Objectives
- Write reusable generic code
- Implement template functions and classes
- Understand template instantiation
- Practice template specialization

### Exercises
- **ex00**: Templates
- **ex01**: Iter
- **ex02**: Array

---

## Module 08: Templated Containers, Iterators & Algorithms

### Key Concepts
- **STL Containers**: `vector`, `list`, `map`, `set`, etc.
- **Iterators**: Object traversal patterns
- **Algorithms**: `std::sort`, `std::find`, `std::transform`, etc.
- **Functional Objects**: Functors and lambda expressions
- **Container Adapters**: `stack`, `queue`, `priority_queue`

### Learning Objectives
- Master STL container usage
- Implement custom iterators
- Apply STL algorithms effectively
- Understand algorithm complexity

### Exercises
- **ex00**: Easy find
- **ex01**: Span
- **ex02**: Mutantstack

---

## Module 09: General Review & Advanced Topics

### Key Concepts
- **Bitcoin Exchange Rate Calculator**: Real-world data processing
- **Reverse Polish Notation Calculator**: Expression evaluation
- **Merge Sort Algorithm**: Sorting and divide-and-conquer
- **Application Integration**: Combining multiple concepts

### Learning Objectives
- Implement complex algorithms
- Parse and process real data formats (CSV)
- Apply learned concepts to practical problems
- Practice code organization and design

### Exercises
- **ex00**: Bitcoin Exchange - Parse CSV data and calculate exchange rates
- **ex01**: RPN Calculator - Implement postfix notation calculator
- **ex02**: PmergeMe - Implement and optimize merge sort

---

## Getting Started

Each module can be built using the provided Makefile:

```bash
cd cpp00/ex00
make
./program_name
```

---

## Compilation Notes

- Compiler: C++ (typically g++ or clang++)
- Standard: C++98 or C++11 (depending on exercise)
- Flags: `-Wall -Wextra -Werror` for strict compilation
