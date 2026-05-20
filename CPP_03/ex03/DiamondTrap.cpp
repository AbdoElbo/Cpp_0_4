/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:45:19 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/20 18:39:07 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name , 100, 50, 30), ScavTrap(name), FragTrap(name)
{
	std::cout <<BG<< "DEFAULT Constructor Called! (##DiamondTrap##)" <<RESET<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name, int hp, int nrg, int dmg): ClapTrap(name, hp, nrg, dmg), ScavTrap(name), FragTrap(name)
{
	std::cout << BG << "Costum Constructor Called! (##DiamondTrap##)" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout <<BR<< "Destructor for " << name <<" Called!(##DiamondTrap##)" <<RESET<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout <<BG<< "Copy-Constructor Called! (##DiamondTrap##)" <<RESET<< std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout <<BG<< "Copy-Assignment Called! (##DiamondTrap##)" <<RESET<< std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My Claptrap name's " << ClapTrap::name << std::endl;
	std::cout << "My Actual name's " << name << std::endl;
}
