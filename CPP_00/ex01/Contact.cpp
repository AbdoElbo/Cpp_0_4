/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:21:51 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/17 16:08:26 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::GetIndex(void)
{
	return (Index);
}

std::string	Contact::GetFirst(void)
{
	return (FirstName);
}

std::string	Contact::GetLast(void)
{
	return (LastName);
}

std::string	Contact::GetNick(void)
{
	return (NickName);
}

std::string	Contact::GetPhone(void)
{
	return (PhoneNumber);
}

std::string	Contact::GetSecret(void)
{
	return (DarkestSecret);
}

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
