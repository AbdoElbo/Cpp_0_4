/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:07:05 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/02/25 16:59:48 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.hpp"

void	add_option()
{

}

void	search_option()
{

}


int main(void)
{
	PhoneBook	phonebook;
	std::string	identifer;

	std::cout<<" ____  _                      _                 _\n";
	std::cout<<"|  _ \\| |__   ___  _ __   ___| |__   ___   ___ | | __\n";
	std::cout<<"| |_) | '_ \\ / _ \\|  _ \\ / _ \\ |_ \\ / _ \\ / _ \\| |/ /\n";
	std::cout<<"|  __/| | | | (_) | | | |  __/ |_) | (_) | (_) |   <\n";
	std::cout<<"|_|   |_| |_|\\___/|_| |_|\\___|_.__/ \\___/ \\___/|_|\\_\\ \n";

	while (1)
	{
		std::cout<<"\nPlease enter one of the options: ADD/SEARCH/EXIT\n";
		std::cin >> identifer;
		if (!identifer.compare("ADD"))
			std::cout<<"Your word is ADD\n";
		else if (!identifer.compare("SEARCH"))
			std::cout<<"Your word is SEARCH\n";
		else if (!identifer.compare("EXIT"))
			return(0);
	}
	return (0);
}
