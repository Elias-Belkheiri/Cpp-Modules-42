/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:28:30 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/27 15:08:41 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <ctime>
#include <time.h>
#include <iomanip>

std::vector<int> merge(std::vector<int> left, std::vector<int> right);
std::vector<int> mergeSortVec(std::vector<int> v);

std::deque<int> mergeDeque(std::deque<int> left, std::deque<int> right);
float sortVector(std::vector<int> &v);
float sortDeque(std::deque<int> &d);
void insertionSortDeque(std::deque<int> &d);
bool onlyDigits(std::string str);
int checkPush(int n, char **argv, std::vector<int> &v, std::deque<int> &d);