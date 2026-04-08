/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekko <gekko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:54:47 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/03/01 05:15:36 by gekko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	public:
		Contact contact[MAX_CON];
	private:
		// static const int max_con {8};
};

void	PrintRow(std::string str);
void	SearchOption(PhoneBook *phonebook);
void	AddOption(PhoneBook *phonebook, int i);

#endif
