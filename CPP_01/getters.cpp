/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:21:51 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/02/26 19:37:43 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int	Contact::GetIndex(void) const 
{
	return (Index);
}

std::string	Contact::GetFirst(void) const
{
	return (FirstName);
}

std::string	Contact::GetLast(void) const
{
	return (LastName);
}

std::string	Contact::GetNick(void) const
{
	return (NickName);
}

std::string	Contact::GetPhone(void) const
{
	return (PhoneNumber);
}

std::string	Contact::GetSecret(void) const
{
	return (DarkestSecret);
}
