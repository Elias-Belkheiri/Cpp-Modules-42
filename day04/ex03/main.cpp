/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:20:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 22:03:48 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    // You cannot create and instance of an abstract class
    // Animal a;
    Cat a;
    Dog b;

    a.makeSound();
    b.makeSound();
}