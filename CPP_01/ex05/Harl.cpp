/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:52:37 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/29 13:00:46 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "| I love having extra bacon for my 7XL-double-cheese  |" << std::endl;
	std::cout << "| -triple-pickle-specialketchup burger. I really do!  |" << std::endl;
	std::cout << "| ____________________________________________________/" << std::endl;
	std::cout << "|/" << std::endl;
	printAsciiArt();
}

void	Harl::info(void)
{
	std::cout << "|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "| I cannot believe adding extra bacon costs more  |" << std::endl;
	std::cout << "| money. You didn't put enough bacon in my burger!|" << std::endl;
	std::cout << "|   If you did, I wouldn't be asking for more!    |" << std::endl;
	std::cout << "| _______________________________________________/" << std::endl;
	std::cout << "|/" << std::endl;
	printAsciiArt();
}

void	Harl::warning(void)
{
	std::cout << "|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "|  I think I deserve to have some extra bacon   |" << std::endl;
	std::cout << "| for free. I've been coming for years, whereas |" << std::endl;
	std::cout << "|   you started working here just last month.   |" << std::endl;
	std::cout << "| ______________________________________________/" << std::endl;
	std::cout << "|/" << std::endl;
	printAsciiArt();
}

void	Harl::error(void)
{
	std::cout << "|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << "| This is unacceptable! I want to speak |" << std::endl;
	std::cout << "|       to the manager RIGHT NOW.       |" << std::endl;
	std::cout << "| ______________________________________/" << std::endl;
	std::cout << "|/" << std::endl;
	printAsciiArt();
}

void	printAsciiArt(void)
{
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣵⣶⣤⣄⣀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠛⢻⣻⡛⠛⠛⣛⣛⡛⢹⣿⡿⠍⡧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⣜⠁⠀⠙⡤⣎⠀⠀⠙⡍⠉⠀⠀⠀⠘⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⢀⠖⠙⢄⠔⠒⠃⠹⣀⣀⠔⠁⠀⠀⠀⠀⠀⠘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⢠⠃⠀⠀⠘⣄⣀⣠⠄⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⡘⠀⠀⠀⠘⠒⠀⠀⣴⣶⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⢃⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⢿⡇⠀⠀⠀⠀⠀⠀⠈⡆⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⢸⠀⠀⠀⠀⡠⠤⠤⠼⠿⠯⠤⠜⠀⠀⠀⠀⠀⠀⠀⠀⠱⡀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠈⡇⠀⠀⠀⠙⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⢄⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⣷⠀⠀⠀⡴⠋⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⠀⠀" << std::endl;
	std::cout << "⠀⡠⠊⠈⠆⠀⠀⢧⡀⠀⣠⡀⠀⢀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢" << std::endl;
	std::cout << "⡜⠁⠀⠀⠀⠀⠀⠀⠉⠉⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string cmds[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if(level != cmds[0] && level != cmds[1]
		&& level != cmds[2] && level != cmds[3])
	{
		std::cerr << "Please enter one of these options:" << std::endl;
		std::cerr << "DEBUG/INFO/WARNING/ERROR" << std::endl;
		return ;
	}
	typedef void (Harl::*FuncPtr)();
	FuncPtr funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; i++)
	{
		if (level == cmds[i])
		{
			(this->*funcs[i])();
			return;
		}
	}
}
