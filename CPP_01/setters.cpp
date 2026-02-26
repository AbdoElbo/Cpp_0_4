/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:33:04 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/02/26 19:38:53 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::set_index(int number)
{
	Index = number;
}

void	Contact::set_first_n(std::string str)
{
	FirstName = str;
}

void	Contact::set_last_n(std::string str)
{
	LastName = str;
}

void	Contact::set_nick_n(std::string str)
{
	NickName = str;
}

void	Contact::set_phone(std::string str)
{
	PhoneNumber = str;
}

void	Contact::set_secret(std::string str)
{
	DarkestSecret = str;
}
