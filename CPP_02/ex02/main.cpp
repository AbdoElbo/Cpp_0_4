/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/13 21:10:14 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(2);
	Fixed const b( Fixed(5.05f) * Fixed(2) );

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "addition: " << std::endl;
	std::cout << a + b << std::endl;

	std::cout << "Substraction: " << std::endl;
	std::cout << a - b << std::endl;

	std::cout << "Division: " << std::endl;
	std::cout << a / b << std::endl;

	std::cout << "Multiplication: " << std::endl;
	std::cout << a * b << std::endl;

	std::cout << "Max of two: " << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "Min of two: " << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	// std::cout << "Increment:" << std::endl;
	// std::cout << "before dec: " << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << "after pre:  " << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << "after post: " << a << std::endl;
	// std::cout << a << std::endl;

	// std::cout << "Decrement:" << std::endl;
	// std::cout << "before inc: " << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << "after pre:  " << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << "after post: " << a << std::endl;
	// std::cout << a << std::endl;


	return EXIT_SUCCESS;
}
