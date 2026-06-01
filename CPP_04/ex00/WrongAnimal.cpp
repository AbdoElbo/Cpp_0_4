/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:05:19 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 13:15:19 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Not an ANIMAL";
	std::cout <<BG<< "DEFAULT Constructor Called!(WrongAnimal)" <<RESET<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<BR<< "Destructor  Called!(WrongAnimal)" <<RESET<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "This isn't an Animal, and it doesn't make any sound!!" << std::endl;
}
