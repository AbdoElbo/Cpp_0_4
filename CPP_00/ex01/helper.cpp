/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekko <gekko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:24:39 by gekko             #+#    #+#             */
/*   Updated: 2026/04/11 00:18:06 by gekko            ###   ########.fr       */
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
	if (!std::getline(std::cin, firstname))
		return ;
	std::cout<<"Enter the last name: ";
	if (!std::getline(std::cin, lastname))
		return ;
	std::cout<<"Enter the nick_name: ";
	if (!std::getline(std::cin, nick))
		return ;
	std::cout<<"Enter the phone number: ";
	if (!std::getline(std::cin, phone))
		return ;
	std::cout<<"Enter the darkest secret: ";
	if (!std::getline(std::cin, darkest))
		return ;

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

bool	IsAllDigits(std::string input)
{
	int	lenght = input.size();

	if (input.empty())
    	return false;
	for (int i = 0; i < lenght; i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(input[i])))
			return false;
	}
	return true;
}
void	SearchOption(PhoneBook *phonebook)
{
	std::string	input_str;
	int			input_num;

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
	if (!std::getline(std::cin, input_str))
		return ;
	if (!IsAllDigits(input_str))
	{
		std::cout << "Invalid input, Only Numeric.\n";
		return ;
	}
	input_num = std::stoi(input_str);
	if (input_num < 0 || input_num >= MAX_CON)
	{
		std::cout<<"\nmf that's an Invalid index.\n\n";
		return ;
	}
	if (phonebook->contact[input_num].GetFirst().size() == 0)
	{
		std::cout<<"\nmf, it's an empty index.\n\n";
		return ;
	}
	std::cout <<"Firstname: " << phonebook->contact[input_num].GetFirst() << "\n";
	std::cout <<"Lastname: " << phonebook->contact[input_num].GetLast() << "\n";
	std::cout <<"Nickname: " << phonebook->contact[input_num].GetNick() << "\n";
	std::cout <<"Phone number: " << phonebook->contact[input_num].GetPhone() << "\n";
	std::cout <<"Darkest Secret: " << phonebook->contact[input_num].GetSecret() << "\n\n";
}
