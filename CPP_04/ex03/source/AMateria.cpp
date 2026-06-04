/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:41:10 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/02 15:04:26 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "NULL";
	std::cout <<BG<< "DEFAULT Constructor Called!(AMateria)" <<RESET<< std::endl;
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
	std::cout <<BG<< "Costum Constructor Called!(AMateria)" <<RESET<< std::endl;
}

AMateria::~AMateria()
{
	std::cout <<BR<< "Destructor Called!(AMateria)" <<RESET<< std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}


std::string const& AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout<< "this function should be used by using ice or cure" <<std::endl;
	std::cout<< "(a.k.a it should be overriden)" <<std::endl;
	// the Class AMateria is an abstract class, so it will never use this..
}
