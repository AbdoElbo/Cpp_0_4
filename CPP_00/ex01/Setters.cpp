/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:33:04 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/16 16:31:38 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::SetIndex(int number)
{
	Index = number;
}

void	Contact::SetFirst(std::string str)
{
	FirstName = str;
}

void	Contact::SetLast(std::string str)
{
	LastName = str;
}

void	Contact::SetNick(std::string str)
{
	NickName = str;
}

void	Contact::SetPhone(std::string str)
{
	PhoneNumber = str;
}

void	Contact::SetSecret(std::string str)
{
	DarkestSecret = str;
}
