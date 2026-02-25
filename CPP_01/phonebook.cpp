/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:07:05 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/02/25 17:44:35 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.hpp"

void	add_option(PhoneBook *phonebook, int i)
{
	std::string firstname;
	std::string lastname;
	std::string nick;
	std::string phone;
	std::string darkest;

	std::cout<<"Please enter the first name: ";
	std::cin >> firstname;
	std::cout<<"Please enter the last name: ";
	std::cin >> lastname;
	std::cout<<"Please enter the nick_name: ";
	std::cin >> nick;
	std::cout<<"Please enter the phone number: ";
	std::cin >> phone;
	std::cout<<"Please enter the darkest secret: ";
	std::cin >> darkest;

	if (!firstname.length() || !lastname.length() ||
		!nick.length() || !phone.length() || !darkest.length())
		return ;
	phonebook->contact[i].FirstName = firstname;
	phonebook->contact[i].LastName = lastname;
	phonebook->contact[i].NickName = nick;
	phonebook->contact[i].PhoneNumber = phone;
	phonebook->contact[i].DarkestSecret = darkest;
}

// void	search_option(PhoneBook phonebook)
// {

// }


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
	while (1)
	{
		std::cout<<"Please enter one of the options: ADD/SEARCH/EXIT\n";
		std::cin >> identifer;
		if (!identifer.compare("ADD") || !identifer.compare("add"))
			add_option(&phonebook, i);
		else if (!identifer.compare("SEARCH") || !identifer.compare("search"))
			std::cout<<"Your word is SEARCH\n";
		else if (!identifer.compare("EXIT") || !identifer.compare("exit"))
			break ;
		if (i < 7)
			i++;
	}
	return (0);
}
