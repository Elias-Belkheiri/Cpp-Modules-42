/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:20:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/08 14:57:20 by ebelkhei         ###   ########.fr       */
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
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound(); 
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
}

void test2()
{
    const WrongAnimal* wrongAnimal = new WrongCat();

    wrongAnimal->makeSound();

    delete wrongAnimal;

}

void test3()
{
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    std::cout << "I'am a " << dog->getType() << std::endl;
    dog->makeSound();
    
    std::cout << "I'am a " << cat->getType() << std::endl;
    cat->makeSound();

    delete dog;
    delete cat;
}

int main()
{
    test1();
    // test2();
    // test3();
}