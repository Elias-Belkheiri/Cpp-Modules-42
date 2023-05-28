/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:27:35 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 11:31:02 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : n(0) {}

Span::Span(size_t n) : n(n)
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

//////////////////////////////////////////////////

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
    else if (!this->n)
        throw Span::EmptyException();
    else
        throw Span::FullException();
}

int Span::shortestSpan()
{
    int span;
    std::vector<int> tmp(this->vec);

    if (this->vec.size() < 2)
        throw Span::NoSpanException();
    
    std::sort(tmp.begin(), tmp.end());    
    span = tmp[1] - tmp[0];
    for(size_t i = 1; i < tmp.size() - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < span)
            span = tmp[i + 1] - tmp[i];
    }

    return (span);
}

int Span::longestSpan()
{
    int max, min;

    if (this->vec.size() < 2)
        throw Span::NoSpanException();
    max = *(std::max_element(this->vec.begin(), this->vec.end()));
    min = *(std::min_element(this->vec.begin(), this->vec.end()));
    return (max - min);
}

std::vector<int> Span::getVec() const
{
    return (this->vec);
}

// Exceptions
const char *Span::EmptyException::what() const throw()
{
    return ("The container is empty");
}

const char *Span::FullException::what() const throw()
{
    return ("The container is full");
}

const char *Span::NoSpanException::what() const throw()
{
    return ("There is no span to find");
}