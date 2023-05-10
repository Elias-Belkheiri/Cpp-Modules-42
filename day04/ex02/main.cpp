/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:20:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/08 15:17:45 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    // You cannot create an instance of an abstract class.
    // AAnimal a;
    Cat a;
    Dog b;

    a.makeSound();
    b.makeSound();
}