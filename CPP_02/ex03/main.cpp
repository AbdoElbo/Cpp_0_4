/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 16:41:28 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(4, 3);
	Point b(1, 1);
	Point c(2, 6);
	Point p(1.5, 3.5);

	if (bsp(a, b, c, p))
		std::cout << "\npoint P is in the Triangle ABC\n" << std::endl;
	else
		std::cout << "\npoint P is NOTTTT in the Triangle ABC\n" << std::endl;
	return EXIT_SUCCESS;
}
