/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:07:05 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/02/25 19:30:38 by aelbouaz         ###   ########.fr       */
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

	std::cout<<"Enter the first name: ";
	std::cin >> firstname;
	std::cout<<"Enter the last name: ";
	std::cin >> lastname;
	std::cout<<"Enter the nick_name: ";
	std::cin >> nick;
	std::cout<<"Enter the phone number: ";
	std::cin >> phone;
	std::cout<<"Enter the darkest secret: ";
	std::cin >> darkest;

	if (!firstname.length() || !lastname.length() ||
		!nick.length() || !phone.length() || !darkest.length())
		return ;
	phonebook->contact[i].Index = i;
	phonebook->contact[i].FirstName = firstname;
	phonebook->contact[i].LastName = lastname;
	phonebook->contact[i].NickName = nick;
	phonebook->contact[i].PhoneNumber = phone;
	phonebook->contact[i].DarkestSecret = darkest;
}

void	print_row(std::string str)
{
	int	diff = 10 - str.length();
	if (diff >= 0)
	{
		std::cout<<"|";
		for(int i = diff; i > 0; --i)
			std::cout<<" ";
		std::cout<<str;
	}
	else if (diff < 0)
	{
		std::cout<<"|";
		for(int k = 0; k < 9; ++k)
			std::cout<< str[k];
		std::cout<< ".";
	}
}

void	search_option(PhoneBook *phonebook)
{
	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	std::cout<<"|     index| firstname|  lastname|  nickname|\n";
	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	for (int i = 0; i < 8; i++)
	{
		std::cout<< "|         " << phonebook->contact[i].Index;
		print_row(phonebook->contact[i].FirstName);
		print_row(phonebook->contact[i].LastName);
		print_row(phonebook->contact[i].NickName);
		std::cout<<"|\n";
		if (i != 7)
			std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
		else
			std::cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
	}
}


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
	for (int k = 0; k < 8; ++k)
		phonebook.contact[k].Index = k;
	while (1)
	{
		std::cout<<"Please enter one of the options: ADD/SEARCH/EXIT\n";
		std::cin >> identifer;
		if (!identifer.compare("ADD") || !identifer.compare("add"))
		{
			add_option(&phonebook, i);
			if (i < 8)
				i++;
		}
		else if (!identifer.compare("SEARCH") || !identifer.compare("search"))
			search_option(&phonebook);
		else if (!identifer.compare("EXIT") || !identifer.compare("exit"))
			break ;
	}
	return (0);
}
