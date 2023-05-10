/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:48:58 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/06 10:56:13 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor have been called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor have been called" << std::endl;
    for (size_t i = 0; i < sizeof(ideas) / (sizeof(ideas[0])); i++)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignment operator have been called" << std::endl;
    for (size_t i = 0; i < sizeof(ideas) / (sizeof(ideas[0])); i++)
        ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor have been called" << std::endl;
}

void Brain::setIdeas(std::string idea)
{
    for (size_t i = 0; i < (sizeof(ideas) / sizeof(*ideas)); i++)
        ideas[i] = idea;
}

std::string Brain::getIdeas() const
{
    return  ideas[0];
}