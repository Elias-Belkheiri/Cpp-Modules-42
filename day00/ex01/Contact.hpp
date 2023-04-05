/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 02:12:49 by elias             #+#    #+#             */
/*   Updated: 2023/04/04 20:03:42 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <cstdlib>
#include <iostream>

class	Contact
{
public:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    std::string phoneNumber;
};


#endif