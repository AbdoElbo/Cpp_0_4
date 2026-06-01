/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:32:51 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/01 17:59:16 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout <<BG<< "DEFAULT Constructor Called!(Cure)" <<RESET<< std::endl;
}

Cure::~Cure()
{
	std::cout <<BR<< "Destructor Called!(Cure)" <<RESET<< std::endl;
}

Cure::Cure(const Cure& other): AMateria(other)
{
	//
}

Cure& Cure::operator=(const Cure& other)
{
	AMateria::operator=(other);
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
