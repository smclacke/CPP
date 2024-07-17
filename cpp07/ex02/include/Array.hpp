/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 12:14:18 by eugene        #+#    #+#                 */
/*   Updated: 2024/07/17 15:08:23 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <typename T>
class Array
{
	private:
		T*				_element;
		unsigned int	_size;

	public:
		Array() : _element(NULL), _size(0) {}	// default
		
		~Array()	// destructor
		{
			delete[] _element;
		}

		Array(unsigned int n)	// param constructor
		{
			_element = new T[n];
			_size = n;
		}

		Array(const Array &copy)	// copy constructor
		{
			_size = copy._size;
			_element = new T[_size];

			for (int i = 0; i < _size; i++)
				_element[i] = copy._memebers[i];
		}

		Array	&operator=(const Array &copy)	// copy assignment operator
		{
			if (this != &copy)
			{
				delete[] _element;
				this->_size = copy._size;
				this->_element = new T[_size];

				for (unsigned int i = 0; i < copy._size; i++)
					_element[i] = copy._element[i];
			}
			return *this;
		}

		unsigned int	size()
		{
			return this->_size;
		}

		T*		getElement()
		{
			return this->_element;
		}

		// Elements can be accessed through the subscript operator: [ ].
		// When accessing an element with the [ ] operator, if its index is out of bounds, an
			// std::exception is thrown.
};



#endif

