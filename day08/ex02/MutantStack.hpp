#pragma once

#include <stack>
#include <deque>
#include <vector>
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
    iterator begin() { return std::stack<T, Container>::c.begin(); }
    iterator end() { return std::stack<T, Container>::c.end(); }
    // Const iterators
    const_iterator begin() const { return std::stack<T, Container>::c.cbegin(); }
    const_iterator end() const { return std::stack<T, Container>::c.cend(); }
    // Reverse iterators
    reverse_iterator rbegin() { return std::stack<T, Container>::c.rbegin(); }
    reverse_iterator rend() { return std::stack<T, Container>::c.rend(); }
    // Const reverse iterators
    const_reverse_iterator rbegin() const { return std::stack<T, Container>::c.crbegin(); }
    const_reverse_iterator rend() const { return std::stack<T, Container>::c.crend(); }
};