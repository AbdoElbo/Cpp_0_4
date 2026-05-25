/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/25 18:42:22 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap monster("Frankenstein");

	for (int i = 0; i < 15; i++)
		monster.attack("Tree");

	monster.takeDamage(65);
	DiamondTrap monster2("('_')");
	std::cout << std::endl;

	monster2 = monster;
	std::cout << std::endl;
	monster.getInfo();
	monster2.getInfo();
	std::cout << std::endl;

	monster.attack("(ᵔᴥᵔ)");

	std::cout << std::endl;
	monster.getInfo();
	monster2.getInfo();
	std::cout << std::endl;

	monster.whoAmI();
	return EXIT_SUCCESS;
}
