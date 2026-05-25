/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/25 18:41:37 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Fighter1("(ㆆ _ ㆆ)");
	FragTrap Fighter2("¯\\_( ͡° ͜ʖ ͡°)_/¯");
	// FragTrap Fighter_rename(Fighter2);

	// std::cout << std::endl;
	// Fighter2 = Fighter_rename;
	// std::cout << std::endl;

	Fighter1.getInfo();
	Fighter2.getInfo();

	std::cout << std::endl;
	Fighter2.highFivesGuys();
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
