/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPC.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:16:39 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/27 10:23:27 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPC.hpp"

// while of the argument checking if there is only numbers and operators
// check if the first operand is an operator
// check if the number of operators is equal to the number of operands - 1
// check if there are consecutive operators

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int parse(std::string arg)
{
    size_t i = -1;
    size_t nums = 0;
    size_t numOfOperators = 0;
    
    if (isOperator(arg[0]))
        return (0);
    while (++i < arg.length())
    {
        if (!isdigit(arg[i]) && !isOperator(arg[i]) && arg[i] != ' ')
            return (0);
        if (isOperator(arg[i]) && !isdigit(arg[i + 1]))
            numOfOperators++;
        if (i + 1 < arg.length() && isOperator(arg[i]) && isOperator(arg[i + 1]))
            return (0);
        if ((arg[i] == '-' && isdigit(arg[i + 1])) || isdigit(arg[i]))
        {
            if (arg[i] == '-')
                i++;
            for (; i < arg.length() && isdigit(arg[i]); i++);
            nums++;
        }
    }
    if (numOfOperators != nums - 1)
    {
        return (0);
    }
    return (1);
}

int fill_list(std::list<int> &list, std::string arg)
{
    int a,b;
    size_t i = 0;
    
    while (i < arg.length())
    {
        for (; i < arg.length() && arg[i] == ' '; i++);
        
        if (isdigit(arg[i]) || (arg[i] == '-' && isdigit(arg[i + 1])))
        {
            if (atoi(arg.c_str() + i) > 9)
                return (0);
            list.push_back(atoi(arg.c_str() + i));
            if (arg[i] == '-')
                i++;
            for (; i < arg.length() && isdigit(arg[i]); i++);
        }
        else if (isOperator(arg[i]))
        {
            if (list.size() < 2)
                return (0);
            b = list.back();
            list.pop_back();
            a = list.back();
            list.pop_back();
            switch (arg[i])
            {
                case '+':
                    list.push_back(a + b);
                    break;
                case '-':
                    list.push_back(a - b);
                    break;
                case '*':
                    list.push_back(a * b);
                    break;
                case '/':
                    list.push_back(a / b);
                    break;
            }
            i++;
        }
    }
    if (list.size() != 1)
        return (0);
    return (1);
}
