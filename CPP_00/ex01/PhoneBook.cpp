/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 23:24:39 by gekko             #+#    #+#             */
/*   Updated: 2026/04/17 16:42:28 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PrintRow(std::string str)
{
	std::cout << "|";
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << "." ;
	else
		std::cout << std::setw(10) << str;
}

bool	IsAllDigits(std::string input)
{
	int	length = input.size();

	if (input.empty())
		return false;
	for (int i = 0; i < length; i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(input[i])))
			return false;
	}
	return true;
}

bool	TakeInput(std::string prompt, std::string &input)
{
	while (true)
	{
		std::cout << prompt;

		if (!std::getline(std::cin, input))
			return false;
		if (std::cin.eof())
			return false;
		if (!input.empty())
			return true;
		std::cout << "Input cannot be empty. Try again.\n";
	}
}

void	PhoneBook::AddOption(int i)
{
	std::string firstname;
	std::string lastname;
	std::string nick;
	std::string phone;
	std::string darkest;

	if(!TakeInput("Enter the first name: ", firstname))
		return ;
	if(!TakeInput("Enter the last name: ", lastname))
		return ;
	if(!TakeInput("Enter the nick_name: ", nick))
		return ;
	if(!TakeInput("Enter the phone number: ", phone))
		return ;
	if(!TakeInput("Enter the darkest secret: ", darkest))
		return ;

	contact[i].SetIndex(i);
	contact[i].SetFirst(firstname);
	contact[i].SetLast(lastname);
	contact[i].SetNick(nick);
	contact[i].SetPhone(phone);
	contact[i].SetSecret(darkest);
}

void	PhoneBook::SearchOption()
{
	std::string	input_str;
	int			input_num;

	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	std::cout<<"|     Index| Firstname|  Lastname|  Nickname|\n";
	std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
	for (int i = 0; i < MAX_CON; i++)
	{
		std::cout<< "|" << std::setw(10) << contact[i].GetIndex();
		PrintRow(contact[i].GetFirst());
		PrintRow(contact[i].GetLast());
		PrintRow(contact[i].GetNick());
		std::cout<<"|\n";
		if (i != MAX_CON - 1)
			std::cout<<"|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|‾‾‾‾‾‾‾‾‾‾|\n";
		else
			std::cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
	}
	std::cout<<"Enter the person's Index: ";
	if (!std::getline(std::cin, input_str) || std::cin.eof())
		return ;
	if (!IsAllDigits(input_str))
	{
		std::cout << "Invalid Input, Only Numeric.\n";
		return ;
	}
	input_num = std::stoi(input_str);
	if (input_num < 0 || input_num >= MAX_CON)
	{
		std::cout<<"\nMF! That's an Invalid Index.\n\n";
		return ;
	}
	if (contact[input_num].GetFirst().size() == 0)
	{
		std::cout<<"\nMF! That's an Empty Index.\n\n";
		return ;
	}
	std::cout <<"Firstname: " << contact[input_num].GetFirst() << "\n";
	std::cout <<"Lastname: " << contact[input_num].GetLast() << "\n";
	std::cout <<"Nickname: " << contact[input_num].GetNick() << "\n";
	std::cout <<"Phone number: " << contact[input_num].GetPhone() << "\n";
	std::cout <<"Darkest Secret: " << contact[input_num].GetSecret() << "\n\n";
}
