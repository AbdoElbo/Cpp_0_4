/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:53:13 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 12:20:23 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					num;
		static const int	cstInt = 8;
	public:
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed& other);
		~Fixed();

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		const static Fixed& max(Fixed& first, Fixed& second);
		const static Fixed& min(Fixed& first, Fixed& second);
		const static Fixed& max(const Fixed& first, const Fixed& second);
		const static Fixed& min(const Fixed& first, const Fixed& second);

		Fixed& operator=(const Fixed& other);
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);


		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);
