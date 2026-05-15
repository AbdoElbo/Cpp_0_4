/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 19:47:14 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Fighter1("Ryu");
	ClapTrap Fighter2("Chun-Li");

	std::cout << std::endl;

	Fighter1.getInfo();
	Fighter2.getInfo();
	Fighter1.takeDamage(5);

	std::cout << std::endl;

	for (int i = 0; i < 9; i++)
		Fighter1.attack("Guile");
	Fighter1.beRepaired(50);
	Fighter1.attack("Guile");
	Fighter1.beRepaired(4);


	Fighter1.getInfo();
	Fighter2.getInfo();

	std::cout << std::endl;

	Fighter1.takeDamage(5);
	Fighter2.takeDamage(5);
	Fighter1.takeDamage(5);

	std::cout << std::endl;

	Fighter1.getInfo();
	Fighter2.getInfo();
	std::cout << std::endl;

	Fighter2.beRepaired(4);
	std::cout << std::endl;

	Fighter1.getInfo();
	Fighter2.getInfo();
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
