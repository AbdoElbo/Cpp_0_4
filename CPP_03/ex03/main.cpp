/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/21 16:02:00 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap monster("Frankenstein");

	std::cout << std::endl;
	monster.getInfo();
	std::cout << std::endl;

	monster.attack("whatever");

	std::cout << std::endl;
	monster.getInfo();
	std::cout << std::endl;

	monster.whoAmI();
	return EXIT_SUCCESS;
}
