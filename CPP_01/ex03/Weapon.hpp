/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:16:40 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/06 14:05:51 by aelbouaz         ###   ########.fr       */
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
		const std::string&	getType();
		void				setType(std::string newWeapon);
	};
