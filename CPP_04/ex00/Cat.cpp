/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:20 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 12:40:29 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(Cat)" <<RESET<< std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout <<BR<< "DEFAULT Destructor Called!(Cat)" <<RESET<< std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat Meows" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}
