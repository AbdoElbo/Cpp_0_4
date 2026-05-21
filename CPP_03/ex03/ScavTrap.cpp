/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:57:06 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/21 15:52:22 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Unkown", ScavTrap::init_hp, ScavTrap::init_nrg, ScavTrap::init_dmg)
{
	std::cout <<BG<< "DEFAULT Constructor Called! (--ScavTrap--)" <<RESET<< std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, ScavTrap::init_hp, ScavTrap::init_nrg, ScavTrap::init_dmg)
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
