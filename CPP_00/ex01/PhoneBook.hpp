/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:54:47 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/17 16:39:16 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		Contact contact[MAX_CON];
		void	SearchOption();
		void	AddOption(int i);
};

void	PrintRow(std::string str);
bool	IsAllDigits(std::string input);
bool	TakeInput(std::string prompt, std::string& input);

#endif
