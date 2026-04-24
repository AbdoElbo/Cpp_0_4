/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:16:40 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 16:39:55 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string newType);
		~Weapon();
		std::string	getType();
		void		setType(std::string newWeapon);
	};

