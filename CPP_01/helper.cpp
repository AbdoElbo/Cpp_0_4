/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekko <gekko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:24:39 by gekko             #+#    #+#             */
/*   Updated: 2026/03/01 05:15:22 by gekko            ###   ########.fr       */
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
	int	input;

	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	std::cout<<"|     Index| Firstname|  Lastname|  Nickname|\n";
	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	for (int i = 0; i < MAX_CON; i++)
	{
		std::cout<< "|         " << phonebook->contact[i].GetIndex();
		print_row(phonebook->contact[i].GetFirst());
		print_row(phonebook->contact[i].GetLast());
		print_row(phonebook->contact[i].GetNick());
		std::cout<<"|\n";
		if (i != MAX_CON - 1)
			std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
		else
			std::cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
	}
	std::cout<<"Enter the person's Index: ";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
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
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}
