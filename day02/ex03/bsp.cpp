/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:22:00 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/08 22:23:54 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float area = ((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
    if (area < 0.0)
        return -area;
    return area;
}

bool bsp( Point const aa, Point const bb, Point const cc, Point const pp)
{
    Point a = aa;
    Point b = bb;
    Point c = cc;
    Point point = pp;
    float area = triangleArea(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    float a1 = triangleArea(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    float a2 = triangleArea(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
    float a3 = triangleArea(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());

    return (area == a1 + a2 + a3);
}