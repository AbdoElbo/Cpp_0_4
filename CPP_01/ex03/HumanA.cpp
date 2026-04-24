/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:32 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 21:25:52 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	// std::cout << "DEFAULT HumanA Constructor Called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon weaponType)
{
	// std::cout << "HumanB Constructor Called" << std::endl;
	this->name = name;
	this->weapon = weaponType;
	std::cout << "HumanA's name set to " << name << " and they have a " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	// std::cout << "HumanA Destructor Called" << std::endl;
}

std::string HumanA::getNameA()
{
	return name;
}

void	HumanA::setNameA(std::string newName)
{
	name = newName;
}

void	HumanA::setWeapon(Weapon newWeapon)
{
	weapon = newWeapon;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
