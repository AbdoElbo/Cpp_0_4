/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:46:17 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/25 18:37:21 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define NR "\033[0;31m" // normal red
#define NG "\033[0;32m" // normal green
#define NY "\033[0;33m" // normal yellow
#define NB "\033[0;34m" // normal blue
#define NP "\033[0;35m" // normal blue
#define BR "\033[1;31m" // bold red
#define BG "\033[1;32m" // bold green
#define BY "\033[1;33m" // bold yellow
#define BB "\033[1;34m" // bold blue
#define BP "\033[1;35m" // bold blue
#define GW "\033[0;39m" // gray/white
#define RESET "\033[0m" // RESET DUH

class ClapTrap
{
	private:
		std::string	name;
		int			health;
		int			energy;
		int			damage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap(std::string name, int hp, int nrg, int dmg);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void getInfo();
		const static int init_hp = 10;
		const static int init_nrg = 10;
		const static int init_dmg = 0;
};
