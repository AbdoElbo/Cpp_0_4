/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:44:27 by gekko             #+#    #+#             */
/*   Updated: 2026/04/28 16:35:28 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.hpp"

int main(int ac, char **av)
{
	std::string line;
	std::string newLine;

	if (initWithCheck(ac, av, line) == false)
		return EXIT_FAILURE;
	newLine = replace(av[2], av[3], line);
	std::ofstream MyFile("REP.replace");
	if (!MyFile.is_open())
	{
		std::cerr << "Failed to open file for writing" << std::endl;
		return EXIT_FAILURE;
	}
	MyFile << newLine;
	if (!MyFile)
	{
		std::cerr << "Writing into file failed!" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
