/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:45:19 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/25 18:36:31 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap", FragTrap::init_hp, ScavTrap::init_nrg, FragTrap::init_dmg), ScavTrap(name), FragTrap(name)
{
	this->d_name = name;
	std::cout <<BG<< "Constructor Called! (##DiamondTrap##)" <<RESET<< std::endl;
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
	std::cout << "My Claptrap name: " << name << std::endl;
	std::cout << "My Actual name  : " << this->d_name << std::endl;
}
