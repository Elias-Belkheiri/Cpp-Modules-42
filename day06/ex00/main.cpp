/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:45:32 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/17 15:07:05 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
   if (argc != 2)
   {
      std::cout << "Error: Invalid number of arguments" << std::endl;
      return 1;
   }
   ScalarConverter::convert(argv[1]);
}