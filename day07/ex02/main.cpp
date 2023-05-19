/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:26:47 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/19 10:25:16 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

void test()
{
    Array<int> a(5);
    for (size_t i = 0; i < a.size(); i++)
    {
        a[i] = i;
        std::cout << a[i] << std::endl;
    }
    try
    {
        std::cout << a[-88] << std::endl;
        // std::cout << a[44] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test1()
{
    Array<std::string> a(5);
    for (size_t i = 0; i < a.size(); i++)
        a[i] = "hola";
    
    Array<std::string> b = a;
    for (size_t i = 0; i < a.size(); i++)
        a[i] = "hello";
    
    for(size_t i = 0; i < b.size(); i++)
    {
        std::cout << "a: " << a[i] << std::endl;
        std::cout << "b: " << b[i] << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    // test();
    // test1();
}