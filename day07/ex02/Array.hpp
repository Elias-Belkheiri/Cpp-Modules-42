/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:10:47 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/19 10:24:45 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <class T>
class Array
{
    T		*_array;
	size_t 	n;
	
	public:
		Array() : _array(NULL), n(0) {}
		Array(unsigned int n) : _array(new T[n]), n(n) {};
		Array(const Array &other): _array(NULL) { *this = other; }
		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				if (_array)
					delete [] _array;
				this->n = other.n;
				if (other.n > 0 && other._array)
				{
					_array = new T[n];
					for(size_t i = 0; i < other.n; i++)
						_array[i] = other._array[i];
				}
				else
					_array = NULL;
			}
			return (*this);
		};

		~Array() { if (_array) delete [] _array; }

		size_t size() const { return (n); };
		T &operator [] (size_t index)
		{
			if (index >= n)
				throw Array::OutOfBoundsException();
			return (_array[index]);
		};
		const T &operator [] (size_t index) const
		{
			if (index >= n)
				throw Array::OutOfBoundsException();
			return (_array[index]);
		};

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Index is out of bounds");
				}
		};
};
