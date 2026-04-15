/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:07:05 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/15 19:36:58 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	identifer;
	int			i = 0;

	std::cout<<" ____  _                      _                 _\n";
	std::cout<<"|  _ \\| |__   ___  _ __   ___| |__   ___   ___ | | __\n";
	std::cout<<"| |_) | '_ \\ / _ \\|  _ \\ / _ \\ |_ \\ / _ \\ / _ \\| |/ /\n";
	std::cout<<"|  __/| | | | (_) | | | |  __/ |_) | (_) | (_) |   <\n";
	std::cout<<"|_|   |_| |_|\\___/|_| |_|\\___|_.__/ \\___/ \\___/|_|\\_\\ \n\n";
	for (int k = 0; k < MAX_CON; ++k)
		phonebook.contact[k].SetIndex(k);
	while (1)
	{
		if (std::cin.eof())
			break ;
		std::cout<<"Please enter one of the options: ADD/SEARCH/EXIT\n";
		if (!std::getline(std::cin, identifer))
			break ;
		if (!identifer.compare("ADD") || !identifer.compare("a"))
		{
			AddOption(&phonebook, i);
			if (i < MAX_CON - 1)
				i++;
			else
				i = 0;
		}
		else if (!identifer.compare("SEARCH") || !identifer.compare("s"))
			SearchOption(&phonebook);
		else if (!identifer.compare("EXIT") || !identifer.compare("e"))
			break ;
	}
	return (0);
}
