/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:58:41 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 13:14:53 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "NOT AN CAT!";
	std::cout <<BG<< "DEFAULT Constructor Called!(WrongCat)" <<RESET<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout <<BR<< "Destructor Called!(WrongCat)" <<RESET<< std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "This is NOT a Cat and it Does NOT Meow!" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}

