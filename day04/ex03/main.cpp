/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:28:42 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/05 15:59:27 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void test1()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
}

void test2()
{
    AMateria*   tmp;
    Character   character_2("3azouz");
    Character*  character = new Character("Hmeda");
    
    character->equip(new Ice());
    character->equip(new Cure());

    character->use(0, character_2);
    tmp = character->getMateria(1);
    character->unequip(1);

    delete character;
    delete tmp;
}

int main()
{
    test1();
    // test2();
    
    while (1);
    return 0;
}