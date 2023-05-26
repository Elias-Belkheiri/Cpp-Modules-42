/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPC.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:01:58 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/26 17:11:53 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <list>

bool isOperator(char c);
int parse(std::string arg);
int fill_list(std::list<int> &list, std::string arg);