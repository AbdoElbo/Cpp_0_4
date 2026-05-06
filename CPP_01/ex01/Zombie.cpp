/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:34 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/06 14:16:16 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor for '" << getName() << "' has been Called" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	// static int count;

	// std::string result = newName + std::to_string(count);
	// count++;
	// name = result;
	name = newName;
}

std::string	Zombie::getName()
{
	return name;
}
