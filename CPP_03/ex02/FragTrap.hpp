/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:56:53 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/21 15:47:25 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		void highFivesGuys();
		~FragTrap();
		const static int init_hp = 100;
		const static int init_nrg = 100;
		const static int init_dmg = 30;
};

