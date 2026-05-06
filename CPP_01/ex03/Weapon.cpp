/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:34 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/06 14:16:43 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "DEFAULT Weapon Constructor Called" << std::endl;
}

Weapon::Weapon(std::string newType)
{
	std::cout << "Weapon Constructor Called" << std::endl;
	type = newType;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor Called" << std::endl;
}

void	Weapon::setType(std::string newWeapon)
{
	type = newWeapon;
}

const std::string&	Weapon::getType()
{
	return type;
}
