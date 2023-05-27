/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:28:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/27 15:09:39 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int checkPush(int n, char **argv, std::vector<int> &v, std::deque<int> &d)
{
    for (int i = 1; i < n; i++)
    {
        if (onlyDigits(argv[i]))
        {
            v.push_back(atoi(argv[i]));
            d.push_back(atoi(argv[i]));
        }
        else
            return (0);
    }
    return (1);
}

bool onlyDigits(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
            return (false);
    }
    return (true);
}

// Vector Sort

float sortVector(std::vector<int> &v)
{
    clock_t start, end;
    start = clock();
    
    v = mergeSortVec(v);
    end = clock();
    return ((((double)(end) / CLOCKS_PER_SEC) - ((double)(start) / CLOCKS_PER_SEC)) * 1 000 000);
}

void insertionSort(std::vector<int> &v)
{
    for (size_t i = 1; i < v.size(); i++)
    {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && key < v[j])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

std::vector<int> mergeSortVec(std::vector<int> v)
{
    std::vector<int> left;
    std::vector<int> right;
    
    if (v.size() == 1)
        return (v);
    if (v.size() <= 10)
    {
        insertionSort(v);
        return (v);
    }
    else
    {
        for (size_t i = 0; i < v.size(); i++)
        {
            if ( i < v.size() / 2)
                left.push_back(v[i]);
            else
                right.push_back(v[i]);
        }
        left = mergeSortVec(left);
        right = mergeSortVec(right);
    }
    return (merge(left, right));
}

std::vector<int> merge(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> result;

    while(left.size() && right.size())
    {
        if (left.front() < right.front())
        {
            result.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while (left.size())
    {
        result.push_back(left.front());
        left.erase(left.begin());
    }
    while (right.size())
    {
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return (result);
}


// Deque sort

void insertionSortDeque(std::deque<int> &d)
{
    for (size_t i = 1; i < d.size(); i++)
    {
        int key = d[i];
        int j = i - 1;

        while (j >= 0 && key < d[j])
        {
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = key;
    }
}

std::deque<int> mergeSortDeq(std::deque<int> v)
{
    std::deque<int> left;
    std::deque<int> right;
    
    if (v.size() == 1)
        return (v);
    if (v.size() <= 10)
    {
        insertionSortDeque(v);
        return (v);
    }
    else
    {
        for (size_t i = 0; i < v.size(); i++)
        {
            if ( i < v.size() / 2)
                left.push_back(v[i]);
            else
                right.push_back(v[i]);
        }
        left = mergeSortDeq(left);
        right = mergeSortDeq(right);
    }
    return (mergeDeque(left, right));
}

std::deque<int> mergeDeque(std::deque<int> left, std::deque<int> right)
{
    std::deque<int> result;

    while(left.size() && right.size())
    {
        if (left.front() < right.front())
        {
            result.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while (left.size())
    {
        result.push_back(left.front());
        left.erase(left.begin());
    }
    while (right.size())
    {
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return (result);
}

float sortDeque(std::deque<int> &d)
{
    clock_t start, end;
    start = clock();
    
    d = mergeSortDeq(d);
    end = clock();
    return (((double)(end) / CLOCKS_PER_SEC) - ((double)(start) / CLOCKS_PER_SEC));
}
