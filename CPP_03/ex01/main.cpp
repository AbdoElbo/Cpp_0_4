/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/25 18:40:59 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Fighter1("(• ε •)");
	ScavTrap Fighter2("ಥ ͜ʖ ಥ");

	std::cout << std::endl;

	// Fighter2 = Fighter1;

	Fighter1.getInfo();
	Fighter2.getInfo();

	std::cout << std::endl;
	Fighter2.guardGate();
	std::cout << std::endl;

	Fighter1.attack("Peter");
	Fighter2.attack("Peter");
	// for (int i = 0; i < 51; i++)
	// 	Fighter2.attack("Peter");

	std::cout << std::endl;

	Fighter1.getInfo();
	Fighter2.getInfo();

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
