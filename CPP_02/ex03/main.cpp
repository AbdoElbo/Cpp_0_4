/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 16:53:54 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(4, 3);
	Point b(1, 1);
	Point c(2, 6);
	Point p(2, 1.66);

	if (bsp(a, b, c, p))
		std::cout << "\033[1;32mPoint P is in the Triangle ABC\033[0m" << std::endl;
	else
		std::cout << "\033[1;31mPoint P is NOTTTT in the Triangle ABC\033[0m" << std::endl;
	return EXIT_SUCCESS;
}
