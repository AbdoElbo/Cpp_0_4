/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 21:19:25 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
	Weapon club = Weapon("Katana");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("Machete");
	bob.attack();
	}
	{
	Weapon club = Weapon("Wooden sword");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("Excalibur");
	jim.attack();
	}
	return (EXIT_SUCCESS);
}


