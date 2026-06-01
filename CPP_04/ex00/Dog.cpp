/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:20 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 12:40:31 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(Dawg)" <<RESET<< std::endl;
	this->type = "Dawg";
}

Dog::~Dog()
{
	std::cout <<BR<< "DEFAULT Destructor Called!(Dawg)" <<RESET<< std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dawg Barks" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}
