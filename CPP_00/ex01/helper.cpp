/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekko <gekko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:24:39 by gekko             #+#    #+#             */
/*   Updated: 2026/04/08 22:07:20 by gekko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	AddOption(PhoneBook *phonebook, int i)
{
	std::string firstname;
	std::string lastname;
	std::string nick;
	std::string phone;
	std::string darkest;

	std::cout<<"Enter the first name: ";
	std::getline(std::cin, firstname);
	std::cout<<"Enter the last name: ";
	std::getline(std::cin, lastname);
	std::cout<<"Enter the nick_name: ";
	std::getline(std::cin, nick);
	std::cout<<"Enter the phone number: ";
	std::getline(std::cin, phone);
	std::cout<<"Enter the darkest secret: ";
	std::getline(std::cin, darkest);

	if (!firstname.length() || !lastname.length() ||
		!nick.length() || !phone.length() || !darkest.length())
		return ;
	phonebook->contact[i].SetIndex(i);
	phonebook->contact[i].SetFirst(firstname);
	phonebook->contact[i].SetLast(lastname);
	phonebook->contact[i].SetNick(nick);
	phonebook->contact[i].SetPhone(phone);
	phonebook->contact[i].SetSecret(darkest);
}

void	PrintRow(std::string str)
{
	int	diff = 10 - str.length();
    
    std::cout << "|";
	if (diff >= 0)
	{
		for(int i = diff; i > 0; --i)
			std::cout<<" ";
		std::cout<<str;
	}
	else if (diff < 0)
	{
		for(int k = 0; k < 9; ++k)
			std::cout<< str[k];
		std::cout<< ".";
	}
}

void	SearchOption(PhoneBook *phonebook)
{
	std::string	input;
	int			num;

	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	std::cout<<"|     Index| Firstname|  Lastname|  Nickname|\n";
	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	for (int i = 0; i < MAX_CON; i++)
	{
		std::cout<< "|         " << phonebook->contact[i].GetIndex();
		PrintRow(phonebook->contact[i].GetFirst());
		PrintRow(phonebook->contact[i].GetLast());
		PrintRow(phonebook->contact[i].GetNick());
		std::cout<<"|\n";
		if (i != MAX_CON - 1)
			std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
		else
			std::cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
	}
	std::cout<<"Enter the person's Index: ";
	std::getline(std::cin, input);
	if (!input.isdigit())
	{
		std::cout << "Invalid input, Only Numeric.\n";
		return ;
	}
	if (input < 0 || input >= MAX_CON)
	{
		std::cout<<"\nmf that's an Invalid index.\n\n";
		return ;
	}
	if (phonebook->contact[input].GetFirst().size() == 0)
	{
		std::cout<<"\nmf, it's an empty index.\n\n";
		return ;
	}
	std::cout <<"Firstname: " << phonebook->contact[input].GetFirst() << "\n";
	std::cout <<"Lastname: " << phonebook->contact[input].GetLast() << "\n";
	std::cout <<"Nickname: " << phonebook->contact[input].GetNick() << "\n";
	std::cout <<"Phone number: " << phonebook->contact[input].GetPhone() << "\n";
	std::cout <<"Darkest Secret: " << phonebook->contact[input].GetSecret() << "\n\n";
}
