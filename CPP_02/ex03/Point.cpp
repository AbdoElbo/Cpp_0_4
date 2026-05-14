/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:26:05 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 16:29:37 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float a, const float b): x(a), y(b)
{
	// std::cout << "Costum constructor called" << std::endl;
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}

Point::Point(const Point& other): x(other.x), y(other.y)
{
}

Point& Point::operator=(const Point& other)
{
	static_cast<void>(other);
	return *this;
}

Fixed Point::getX() const
{
	Fixed temp(x);
	return temp;
}

Fixed Point::getY() const
{
	Fixed temp(y);
	return temp;
}
