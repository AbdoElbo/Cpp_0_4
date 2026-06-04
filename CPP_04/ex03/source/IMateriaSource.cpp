/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:14:40 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/02 15:05:15 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout <<BG<< "DEFAULT Constructor Called!(IMateriaSource)" <<RESET<< std::endl;
}

IMateriaSource::~IMateriaSource()
{
	std::cout <<BR<< "Destructor Called!(IMateriaSource)" <<RESET<< std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other)
{
	(void)other;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other)
{
	(void)other;
	return *this;
}
