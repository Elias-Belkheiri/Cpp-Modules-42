/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:24:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 11:34:06 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <exception>
#include <cstdlib>
class Span
{
    private:
        std::vector<int>	vec;
        size_t 				n;
	
	public:
		Span();
		Span(size_t n);
		Span(const Span &src);
		~Span();
		
		Span &operator=(const Span &rhs);

		std::vector<int> 	getVec() const;
		void 				addNumber(int n);
		void				printVec();
		int					shortestSpan();
		int					longestSpan();
		
		// Adding a range of elements using iterators
		template <typename T>
		void addElements(T begin, T end)
		{
			if (this->vec.size() + std::distance(begin, end) > this->n)
				throw Span::FullException();
			vec.insert(vec.end(), begin, end);
		}
		
		// Exceptions
		class EmptyException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class FullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};