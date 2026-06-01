/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:20 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/29 13:39:02 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(Cat)" <<RESET<< std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout <<BR<< "DEFAULT Destructor Called!(Cat)" <<RESET<< std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	this->brain = new Brain();
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain();
	}
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

Brain* Cat::getBrain() const
{
	return brain;
}
