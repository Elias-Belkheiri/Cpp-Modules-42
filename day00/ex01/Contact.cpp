/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:18:59 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/05 17:34:15 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setInfo(std::string attr, std::string type)
{
    if (type == "firstName")
        this->firstName = attr;
    else if (type == "lastName")
        this->lastName = attr;
    else if (type == "nickName")
        this->nickName = attr;
    else if (type == "darkestSecret")
        this->darkestSecret = attr;
    else if (type == "phoneNumber")
        this->phoneNumber = attr;
}

std::string Contact::getFirstName() { return firstName; };
std::string Contact::getLastName() { return lastName; };
std::string Contact::getNickName() { return nickName; };
std::string Contact::getDarkestSecret() { return darkestSecret; };
std::string Contact::getPhoneNumber() { return phoneNumber; };