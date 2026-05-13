/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:52:37 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/13 21:07:56 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	this->num = num * 256;
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	this->num = roundf(num * 256.0f);
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->num = other.num;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy-Assignment operator called" << std::endl;
	if (this != &other)
		this->num = other.num;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->num;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

float Fixed::toFloat() const
{
	return this->num / 256.0f;
}

int Fixed::toInt() const
{
	return this->num / 256;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.num = this->num + other.num;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.num = this->num - other.num;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result.num = this->num * other.num;
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result.num = this->num / other.num;
	return result;
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first.getRawBits() > second.getRawBits())
		return first;
	else
		return second;
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	else
		return second;
}


