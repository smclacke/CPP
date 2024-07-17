/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/17 17:05:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/07/17 17:05:46 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>


template <typename T>
class Array
{
	private:
		T*				_elements;
		unsigned int	_size;

	public:
		Array() : _elements(NULL), _size(0) {}	// default
		
		~Array()	// destructor
		{
			delete[] _elements;
		}

		Array(unsigned int n)	// param constructor
		{
			_elements = new T[n];
			_size = n;
		}

		Array(const Array &copy)	// copy constructor
		{
			this->_size = copy._size;
			this->_elements = new T[_size];

			for (unsigned int i = 0; i < this->_size; i++)
				this->_elements[i] = copy._elements[i];
		}

		Array	&operator=(const Array &copy)	// copy assignment operator
		{
			if (this != &copy)
			{
				delete[] this->_elements;
				this->_size = copy._size;
				this->_elements = new T[_size];

				for (unsigned int i = 0; i < copy._size; i++)
					this->_elements[i] = copy._elements[i];
			}
			return *this;
		}
		
		
		// methods
		unsigned int	size() const
		{
			return this->_size;
		}

		T	&operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw std::out_of_range("Index is out of bounds");
			return this->_elements[i];
		}

};


#endif

