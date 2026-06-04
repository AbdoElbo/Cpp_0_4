/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:32:59 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/02 13:57:07 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout <<BG<< "DEFAULT Constructor Called!(Ice)" <<RESET<< std::endl;
}

Ice::~Ice()
{
	std::cout <<BR<< "Destructor Called!(Ice)" <<RESET<< std::endl;
}

Ice::Ice(const Ice& other): AMateria(other)
{
	//
}

Ice& Ice::operator=(const Ice& other)
{
	AMateria::operator=(other);
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone()
{
	// AMateria *NewMateria = new Ice();

	// return NewMateria;
}
