/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:17:34 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 16:48:38 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		weapon;
		std::string	name;
	public:
		HumanA();
		HumanA(std::string name, Weapon weaponType);
		~HumanA();
		std::string	getNameA();
		void		setNameA(std::string newType);
		void		setWeapon(Weapon newWeapon);
		void		attack();
};
