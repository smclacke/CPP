/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 12:14:18 by eugene        #+#    #+#                 */
/*   Updated: 2024/07/17 15:59:33 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>


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
			this->_size = copy._size;
			this->_element = new T[_size];

			for (unsigned int i = 0; i < this->_size; i++)
				this->_element[i] = copy._element[i];
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
		
		
		// methods
		unsigned int	size() const
		{
			return this->_size;
		}

		T 				&operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw std::out_of_range("Index is out of bounds");
			return this->_element[i];
		}

};


#endif

