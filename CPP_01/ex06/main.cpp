/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:59:36 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/06 13:48:23 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	error_check(int ac, char **av)
{
	std::string lvl;

	if (ac != 2)
	{
		std::cerr << "Please enter one of these options:" << std::endl;
		std::cerr << "DEBUG/INFO/WARNING/ERROR" << std::endl;
		return EXIT_FAILURE;
	}
	lvl = av[1];
	if(lvl != "DEBUG" && lvl != "INFO"
		&& lvl != "WARNING" && lvl != "ERROR")
	{
		std::cerr << "Please enter one of these options:" << std::endl;
		std::cerr << "DEBUG/INFO/WARNING/ERROR" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

int	main(int ac, char **av)
{
	Harl	MaleKaren;

	if (error_check(ac, av) == EXIT_FAILURE)
		return EXIT_FAILURE;
	MaleKaren.complain(av[1]);
	return EXIT_SUCCESS;
}
