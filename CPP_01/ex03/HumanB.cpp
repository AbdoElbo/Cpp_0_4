/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:17:34 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/06 14:16:39 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "DEFAULT HumanB Constructor Called" << std::endl;
	this->name = name;
	this->weapon = nullptr;
	std::cout << "HumanB's name set to " << name << std::endl;
}

HumanB::HumanB(std::string name, Weapon *weaponType)
{
	std::cout << "HumanB Constructor Called" << std::endl;
	this->name = name;
	this->weapon = weaponType;
	std::cout << "HumanB's name set to " << name << " and they have a " << weapon->getType() << std::endl;

}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor Called" << std::endl;
}

std::string HumanB::getNameB()
{
	return name;
}

void	HumanB::setNameB(std::string newName)
{
	name = newName;
}

void	HumanB::setWeapon(Weapon *newWeapon)
{
	weapon = newWeapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " Doesn't have a weapon!! (HE DEAD)" << std::endl;

}
