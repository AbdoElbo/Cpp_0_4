/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:57:06 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/15 18:00:50 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name): health(100), energy(50), damage(20)
{
	
}

ScavTrap::~ScavTrap()
{

}

ScavTrap::ScavTrap(const ScavTrap& other)
{

}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{

}
