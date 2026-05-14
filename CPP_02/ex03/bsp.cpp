/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:47:40 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 16:58:00 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// for A(x1, y1) and B(x2, y2), and Point H(xh, yh)
// cross product value is (the scalar D):
// D = (x2 - x1) * (yh - y1) - (y2 - y1) * (xh - x1)
// if (D > 0) ---> H is on the left of AB
// if (D < 0) ---> H is on the Right of AB
// if (D == 0) ---> H is on AB
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed D1 = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed D2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
	Fixed D3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

	if ((D1>0) && (D2>0) && (D3>0))
		return true;
	if ((D1<0) && (D2<0) && (D3<0))
		return true;
	else
		return false;
}
