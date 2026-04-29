/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:59:36 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/29 18:38:19 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	MaleKaren;
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
		return EXIT_FAILURE;;
	}
	MaleKaren.complain(av[1]);
	return EXIT_SUCCESS;
}
