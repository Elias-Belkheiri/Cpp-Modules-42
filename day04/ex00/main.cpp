/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:20:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/05 16:14:58 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void test1()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongAnimal = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound(); 
    meta->makeSound();
    wrongAnimal->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongAnimal;
}

int main()
{
    test1();
    while (1);
}