/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:21:28 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 10:37:11 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int Number = 5;
	Zombie *arr = zombieHorde(Number, "Mr. Meeseeks");
	// for (int i = 0; i < Number; i++)
	// {
	// 	std::cout << "N°"<< i << " ";
	// 	arr[i].announce();
	// }
	delete[] arr;
	return (EXIT_SUCCESS);
}

