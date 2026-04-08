/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:07:08 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/02/25 16:07:09 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (i < ac)
	{
		std::string str = av[i];
		for (int k = 0; k < (int) str.length(); k++)
			str[k] = (char) toupper(str[k]);
		std::cout << str;
		i++;
	}
	std:: cout << "\n";
	return (1);
}

