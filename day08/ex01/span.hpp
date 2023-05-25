/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:24:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/25 16:11:51 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <cstdlib>
// Check that the range of iterators can be of any container type
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
		void				printVec(std::vector<int> vec);
		int					shortestSpan();
		int					longestSpan();
		void				addElements(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
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