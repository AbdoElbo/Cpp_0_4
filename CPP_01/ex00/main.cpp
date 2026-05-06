/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/29 18:56:28 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie1;

	zombie1 = newZombie("Pickle Rick");
	std::cout << "\nUgh Morty, how many times should i remind you" << std::endl;
	std::cout << "my name's not Rick, it's " << zombie1->getName() << std::endl;
	std::cout << std::endl;
	randomChump("Morty");
	delete zombie1;
	return (EXIT_SUCCESS);
};

