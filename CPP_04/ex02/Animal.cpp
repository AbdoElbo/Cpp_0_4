/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:20 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/01 16:13:16 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(Animal)" <<RESET<< std::endl;
	type = "(Not Set Yet)";
}

Animal::~Animal()
{
	std::cout <<BR<< "DEFAULT Destructor Called!(Animal)" <<RESET<< std::endl;
}


Animal::Animal(const Animal& other)
{
	this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

Brain* Animal::getBrain() const
{
	return nullptr;
}

