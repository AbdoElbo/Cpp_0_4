/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:49:32 by gekko             #+#    #+#             */
/*   Updated: 2026/04/28 18:43:44 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.hpp"

bool initWithCheck(int ac, char **av, std::string &line)
{
	std::string	subLine;

	if (ac != 4)
	{
		std::cerr << "Invalid Number of Arguments." << std::endl;
		return false;
	}
	std::ifstream fd(av[1]);
	if (!fd)
	{
		std::cerr << "Failed to open file for reading." << std::endl;
		return false;
	}
	while (std::getline(fd, subLine))
	{
		line.append(subLine);
		line.append("\n");
	}
	return true;
}

std::string	replace(std::string s1, std::string s2, std::string &line)
{
	std::string	newLine;
	size_t		lineSize = line.length();
	size_t		s1Size = s1.length();
	size_t		i = 0;

	while(i < lineSize)
	{
		if (i + s1Size <= lineSize && line.compare(i, s1Size, s1) == 0)
		{
			newLine.append(s2);
			i += s1Size;
		}
		else
		{
			newLine.push_back(line[i]);
			i++;
		}
	}
	return newLine;
}

std::string getFileName(std::string str)
{
	std::string fileName;
	int	len = str.length();

	for (int i = 0; i < len ; i++)
	{
		if (str[i] == '.')
			break;
		fileName.push_back(str[i]);
	}
	return (fileName);
}
