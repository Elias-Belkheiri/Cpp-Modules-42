/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:08:51 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/08 22:27:08 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed (0)), _y(Fixed (0)) {};

Point::~Point(void)
{
    
}

Point::Point(const float x, const float y) : _x(Fixed (x)), _y(Fixed (y)) {};

Point::Point(const Point &p) : _x(p._x), _y(p._y) {};

Point& Point::operator=(const Point _point)
{
    (void)_point;
    return (*this);
}

float Point::getX()
{
    return _x.toFloat();
}

float Point::getY()
{
    return _y.toFloat();
}