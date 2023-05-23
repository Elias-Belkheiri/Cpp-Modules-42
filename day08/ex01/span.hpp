/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:24:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/23 16:53:20 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        std::vector<int>	vec;
        size_t 				n;
	
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		
		Span &operator=(const Span &rhs);

		void 	addNumber(int n);
		void	printVec(std::vector<int> vec);
		void	addElements(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		
		// Exceptions
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