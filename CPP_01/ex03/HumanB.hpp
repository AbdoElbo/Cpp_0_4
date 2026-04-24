/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:17:34 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 16:47:37 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon weaponType);
		~HumanB();
		std::string	getNameB();
		void		setNameB(std::string newType);
		void		setWeapon(Weapon newWeapon);
		void		attack();
};
