/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:52:37 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/11 15:20:33 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\n[DEBUG]" << std::endl;
	std::cout << " I love having extra bacon for my 7XL-double-cheese  " << std::endl;
	std::cout << " -triple-pickle-specialketchup burger. I really do!  \n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\n[INFO]" << std::endl;
	std::cout << " I cannot believe adding extra bacon costs more  " << std::endl;
	std::cout << " money. You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "   If you did, I wouldn't be asking for more!    \n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\n[WARNING]" << std::endl;
	std::cout << "  I think I deserve to have some extra bacon   " << std::endl;
	std::cout << " for free. I've been coming for years, whereas " << std::endl;
	std::cout << "   you started working here just last month.   \n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\n[ERROR]" << std::endl;
	std::cout << " This is unacceptable! I want to speak " << std::endl;
	std::cout << "       to the manager RIGHT NOW.       \n" << std::endl;
}

command	stringToComplaint(std::string str)
{
	if (str == "DEBUG")
		return DEBUG;
	if (str == "INFO")
		return INFO;
	if (str == "WARNING")
		return WARNING;
	return ERROR;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*FuncPtr)();
	FuncPtr funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	command cmd = stringToComplaint(level);
	switch (cmd)
	{
		case DEBUG:
			(this->*funcs[0])();
		case INFO:
			(this->*funcs[1])();
		case WARNING:
			(this->*funcs[2])();
		case ERROR:
		{
			(this->*funcs[3])();
			break ;
		}
		default:
			std::cout << "NO COMPALIN AVAILABLE, (Harl is satisfied somehow)!" << std::endl;
	}
}

