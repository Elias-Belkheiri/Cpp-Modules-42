/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:51:23 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 14:34:12 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    std::vector<int> v;
    std::deque<int> d;
    double v_time;
    double d_time;
    
    if (argc == 1)
    {
        std::cout << "usage: ./PmergeMe [numbers ...]" << std::endl;
        return (1);
    }
    if (!checkPush(argc, argv, v, d))
    {
        std::cout << "Error: invalid arguments" << std::endl;
        return (1);
    }
    
    std::cout << "Before: ";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    v_time = sortVector(v);
    d_time = sortDeque(d);
    std::cout << "After: ";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    std::cout << std::setprecision(5) << "Time to process a range of " << v.size() << " elements with std::vector " << v_time << std::endl;
    std::cout << "Time to process a range of " << d.size() << " elements with std::deque " << d_time << std::endl;
}
