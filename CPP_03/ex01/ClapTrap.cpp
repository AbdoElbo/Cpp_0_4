/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:46:25 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/15 17:58:46 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): health(10), energy(10), damage(0)
{
	std::cout << "Default Constructor Called!" << std::endl;
	this->name = "UNKOWN";
}

ClapTrap::ClapTrap(std::string name): health(10), energy(10), damage(0)
{
	std::cout <<BG<< "Costum Constructor Called!" <<RESET<< std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout <<BR<< "Destructor for " << this->name <<" Called!" <<RESET<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->energy = other.energy;
	this->health = other.health;
	this->damage = other.damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->energy = other.energy;
	this->health = other.health;
	this->damage = other.damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->health)
	{
		std::cout <<NY<< this->name << " is Dead and can't attack." <<RESET<< std::endl;
		return;
	}
	if (!this->energy)
	{
		std::cout <<NY<< this->name << " has no energy points left and can't attack." <<RESET<< std::endl;
		return;
	}
	else
	{
		std::cout <<NB<< this->name << " attacked " << target <<RESET<<std::endl;
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health <= 0)
	{
		std::cout <<BR<< "STAAAAAPP, "<< this->name << " IS ALREADY DEAD!!!" <<RESET<< std::endl;
		return ;
	}
	this->health -= amount;
	if (this->health < 0)
	{
		this->health = 0;
		std::cout <<NR<< this->name << " took " << amount << " damage! AND DIED, RIP!" <<RESET<< std::endl;
	}
	else
		std::cout <<NR<< this->name << " took " << amount << " damage!" <<RESET<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy)
	{
		if (this->health + amount >= 10)
		{
			std::cout <<NG<< this->name << " Restored Full Health" <<RESET<< std::endl;
			this->health = 10;
		}
		else
		{
			std::cout <<NG<< this->name << " used a potion and gained +" << amount << "hp!" <<RESET<< std::endl;
			this->health += amount;
		}
	}
	else
		std::cout <<NY<< this->name << " doesn't have enough energy points to heal!" <<RESET<< std::endl;
}

void ClapTrap::getInfo()
{
	std::cout <<GW<< name << " has : " << health << " HP, " << energy << " energy pts." <<RESET<< std::endl;
}
