/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:45:51 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/21 15:53:42 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap
{
	private:

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(std::string name, int hp, int nrg, int dmg);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();
		void whoAmI();
};
