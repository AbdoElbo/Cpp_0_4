/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:57:06 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/20 18:22:11 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Unkown", 100, 50, 20)
{
	std::cout <<BG<< "DEFAULT Constructor Called! (--ScavTrap--)" <<RESET<< std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout <<BG<< "Constructor Called! (--ScavTrap--)" <<RESET<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout <<BR<< "Destructor for " << name <<" Called!(--ScavTrap--)" <<RESET<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout <<BG<< "Copy-Constructor Called! (--ScavTrap--)" <<RESET<< std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout <<BG<< "Copy-Assignement Called! (--ScavTrap--)" <<RESET<< std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout <<NP<< "ScavTrap named " << name << " is now in Gate Keeper Mode" <<RESET<< std::endl;
}
