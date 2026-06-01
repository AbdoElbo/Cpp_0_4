/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:20 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/01 15:26:13 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(Dog)" <<RESET<< std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout <<BR<< "DEFAULT Destructor Called!(Dog)" <<RESET<< std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
	this->brain = new Brain();
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain();
	}
	return *this;
}

void Dog::makeSound()
{
	std::cout << "Dog Meows" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}

std::string Dog::getIdea(int index) const
{
	return brain->ideas[index];
}

Brain* Dog::getBrain() const
{
	return brain;
}
