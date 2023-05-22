/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:27:35 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/21 15:35:57 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n) : n(n)
{
    vec.reserve(n);
}

Span::Span(const Span &src)
{
    *this = src;
}

Span::~Span() {}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        this->n = rhs.n;
        this->vec = rhs.vec;
    }
    return (*this);
}

void Span::printVec()
{
    for (size_t i = 0; i < this->vec.size(); i++)
        std::cout << this->vec[i] << " ";
    std::cout << std::endl;
}

void Span::addNumber(int n)
{
    if (this->vec.size() < this->n)
        this->vec.push_back(n);
    else
        throw Span::FullException();
}

int Span::shortestSpan()
{
    int span;

    if (this->vec.size() < 2)
        throw Span::NoSpanException();
        
    std::cout << "befor sort: ";
    this->printVec();
    std::sort(this->vec.begin(), this->vec.end());
    std::cout << "after sort: ";
    this->printVec();
    
    span = this->vec[1] - this->vec[0];
    for(size_t i = 1; i < this->vec.size() - 1; i++)
    {
        if (this->vec[i + 1] - this->vec[i] < span)
            span = this->vec[i + 1] - this->vec[i];
    }

    return (span);
}

int Span::longestSpan()
{
    int span;

    if (this->vec.size() < 2)
        throw Span::NoSpanException();
    
    std::cout << "befor sort: ";
    this->printVec();
    std::sort(this->vec.begin(), this->vec.end());
    std::cout << "after sort: ";
    this->printVec();
    
    span = this->vec[this->vec.size() - 1] - this->vec[0];

    return (span);
}

// Exceptions
const char *Span::FullException::what() const throw()
{
    return ("The container is full");
}

const char *Span::NoSpanException::what() const throw()
{
    return ("There is no span to find");
}