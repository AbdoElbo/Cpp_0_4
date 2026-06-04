/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:42:21 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/02 15:02:34 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(ICharacter)" <<RESET<< std::endl;
	for(int i = 0; i< MAX_SLOTS; i++)
		this->slots[i] = "EMPTY";
}

ICharacter::~ICharacter()
{
	std::cout <<BR<< "Destructor  Called!(ICharacter)" <<RESET<< std::endl;
}

ICharacter::ICharacter(const ICharacter& other)
{
	this->name = other.name;
	for (int i=0; i < 3; i++)
		this->slots[i] = other.slots[i];
}

ICharacter& ICharacter::operator=(const ICharacter& other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i=0; i < 3; i++)
			this->slots[i] = other.slots[i];
	}
	return *this;
}
