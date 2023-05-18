/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:45:33 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/18 09:36:44 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tools.hpp"

int main()
{
    // A a;
    // A &ref = a;
    // identify(ref);

    // B b;
    // identify(&b);

    Base *base = generate();
    identify(base);
    delete base;    
}