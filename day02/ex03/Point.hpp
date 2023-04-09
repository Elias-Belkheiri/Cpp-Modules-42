/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:06:41 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/08 22:24:54 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed    _x;
        const Fixed    _y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &p);
        Point &operator=(const Point _point);
        ~Point(void);

        float    getX(void);
        float    getY(void);

        void    setX(Fixed x);
        void    setY(Fixed y);

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif