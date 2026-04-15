/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:21:51 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/15 19:36:28 by aelbouaz         ###   ########.fr       */
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
