/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 11:11:08 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int Number = 5;
	Zombie *arr = zombieHorde(Number, "Mr. Meeseeks");
	for (int i = 0; i < Number; i++)
		arr[i].announce();
	delete[] arr;
	return (EXIT_SUCCESS);
}

