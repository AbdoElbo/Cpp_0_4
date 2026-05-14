/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:46:17 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/14 20:01:23 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define NG "\033[0;32m" // normal green
#define NR "\033[0;31m" // normal red
#define NB "\033[0;34m" // normal blue
#define NY "\033[0;33m" // normal yellow
#define BG "\033[1;32m" // bold green
#define BR "\033[1;31m" // bold red
#define BB "\033[1;34m" // bold blue
#define BY "\033[1;33m" // bold yellow
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
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void getInfo();

};
