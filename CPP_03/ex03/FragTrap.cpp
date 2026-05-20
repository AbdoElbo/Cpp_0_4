/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:57:06 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/20 18:22:21 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Unkown", 100, 100, 30)
{
	std::cout <<BG<< "DEFAULT Constructor Called! ($$FragTrap$$)" <<RESET<< std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout <<BG<< "Constructor Called! ($$FragTrap$$)" <<RESET<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout <<BR<< "Destructor for " << name <<" Called!($$FragTrap$$)" <<RESET<< std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout <<BG<< "Copy-Constructor Called! ($$FragTrap$$)" <<RESET<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout <<BG<< "Copy-Assignement Called! ($$FragTrap$$)" <<RESET<< std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout <<NP<< "High Five, Guys? Please!" <<RESET<< std::endl;
}
