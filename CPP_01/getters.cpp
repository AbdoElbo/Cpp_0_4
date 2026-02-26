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

int	Contact::get_index(void)
{
	return (Index);
}

std::string	Contact::get_first_n(void)
{
	return (FirstName);
}

std::string	Contact::get_last_n(void)
{
	return (LastName);
}

std::string	Contact::get_nick_n(void)
{
	return (NickName);
}

std::string	Contact::get_phone(void)
{
	return (PhoneNumber);
}

std::string	Contact::get_secret(void)
{
	return (DarkestSecret);
}
