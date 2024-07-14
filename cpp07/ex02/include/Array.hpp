/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/14 12:14:18 by eugene        #+#    #+#                 */
/*   Updated: 2024/07/14 12:39:43 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	priavte:
		T*		_members;
		size_t	_size;

	public:
		Array() : _member(NULL), _size(0) {}	// default
		
		~Array()	// destructor
		{
			delete[] _members;
		}

		Array(size_t n)	// param constructor
		{
			_members = new T[n];
			_size = n;
		}

		Array(const Array &copy)	// copy constructor
		{
			_size = copy._size;
			_members = new T[_size];

			for (int i = 0; i < _size; i++)
				_members[i] = copy._memebers[i];
		}

}



#endif

