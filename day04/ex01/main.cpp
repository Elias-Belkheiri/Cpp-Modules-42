/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:20:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 12:47:08 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void    test()
{
    Animal *animals[4];
    for(int i=0; i<4; i++)
    {
        if (i < 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    for(int i=0; i<4; i++)
        delete animals[i];
}

void test2()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
}

void test3()
{
    Cat cat;
    const Brain &brain = cat.getBrain();
    cat.setIdeas("l7ot");
    std::cout << "Cat1 Idea: " << brain.getIdeas() << std::endl;

    std::cout << std::endl;

    Cat cat2 = cat;
    cat2.setIdeas("chicken");
    const Brain &brain2 = cat2.getBrain();
    std::cout << "Cat 1 Idea: " << brain.getIdeas() << std::endl;
    std::cout << "Cat 2 Idea: " << brain2.getIdeas() << std::endl;
}

int main()
{
    test();
    std::cout << std::endl << std::endl;
    test2();
    std::cout << std::endl << std::endl;
    test3();
    std::cout << std::endl << std::endl;
}