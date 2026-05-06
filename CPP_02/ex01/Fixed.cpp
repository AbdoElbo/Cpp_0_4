/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:52:37 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/05 13:12:42 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	integer = num;
}

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->integer = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy-Assignment operator called" << std::endl;
	if (this != &other)
		this->integer = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->integer;
}

void Fixed::setRawBits(int const raw)
{
	this->integer = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat() const
{

}

int Fixed::toInt() const
{

}
