/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 12:46:53 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(2);
	Fixed const b( Fixed(5.05f) * Fixed(2) );

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "\nOPERATIONS:" << std::endl;
	std::cout << "addition: " << a + b << std::endl;
	std::cout << "Substraction: " << a - b  << std::endl;
	std::cout << "Division: " << a / b << std::endl;
	std::cout << "Multiplication: " << a * b << std::endl;

	std::cout << "\nMAX/MIN:" << std::endl;
	std::cout << "Max of two: " << Fixed::max(a, b) << std::endl;
	std::cout << "Min of two: " << Fixed::min(a, b) << std::endl;

	std::cout << "\nCOMPARISONS:" <<  std::endl;
	std::cout << "a is bigger than b: " << (a > b) << std::endl;
	std::cout << "a is bigger OR equal to b: " << (a >= b) << std::endl;
	std::cout << "a is smaller than b: " << (a < b) << std::endl;
	std::cout << "a is smaller OR equal to b: " << (a <= b) << std::endl;
	std::cout << "a is equal to b: " << (a == b) << std::endl;
	std::cout << "a is different than b: " << (a != b) << std::endl;

	Fixed const c( Fixed(5.05f) * Fixed(2) );
	std::cout << "\nc is bigger than b: " << (c > b) << std::endl;
	std::cout << "c is smaller than b: " << (c < b) << std::endl;
	std::cout << "c is bigger OR equal to b: " << (c >= b) << std::endl;
	std::cout << "c is smaller OR equal to b: " << (c <= b) << std::endl;
	std::cout << "c is equal to b: " << (c == b) << std::endl;
	std::cout << "c is different than b: " << (c != b) << std::endl;

	std::cout << "\nIncrement:" << std::endl;
	std::cout << "before Pre-inc: " << a << std::endl;
	std::cout << "while Pre-inc: " << ++a << std::endl;
	std::cout << "after pre-inc:  " << a << std::endl;

	std::cout << "\nbefore Post-inc: " << a << std::endl;
	std::cout << "while Post-inc: " << a++ << std::endl;
	std::cout << "after Post-inc:  " << a << std::endl;


	std::cout << "\nDecrement:" << std::endl;
	std::cout << "before Pre-dec: " << a << std::endl;
	std::cout << "while Pre-dec: " << --a << std::endl;
	std::cout << "after pre-dec:  " << a << std::endl;

	std::cout << "\nbefore Post-dec: " << a << std::endl;
	std::cout << "while Post-dec: " << a-- << std::endl;
	std::cout << "after Post-dec:  " << a << std::endl;

	return EXIT_SUCCESS;
}
