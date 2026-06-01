/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:20 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 12:40:29 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(Brain)" <<RESET<< std::endl;
	this->ideas = new std::string[100];
	for (int i=0; i<100; i++)
		this->ideas[i] = "IM HUNGRYY!!! " + std::to_string(i);
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout <<BR<< "DEFAULT Destructor Called!(Brain)" <<RESET<< std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i=0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i=0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

