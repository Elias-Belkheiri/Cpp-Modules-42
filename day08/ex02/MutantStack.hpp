/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:55:16 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/24 17:12:59 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <algorithm>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() : std::stack<T, Container>() {}
        MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
        ~MutantStack() {}
        
        MutantStack &operator=(const MutantStack &other)
        {
            if (this != &other)
                std::stack<T, Container>::operator = (other);
            return (*this);
        }
    
    typedef typename std::stack<T, Container>::container_type container;
    
    // Iterators
    typedef typename container::iterator iterator;
    typedef typename container::const_iterator const_iterator;
    // Reverse iterators
    typedef typename container::reverse_iterator reverse_iterator;
    typedef typename container::const_reverse_iterator const_reverse_iterator;

    iterator begin() { return (container::begin()); }
};