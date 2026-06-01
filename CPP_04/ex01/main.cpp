/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:27:46 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/01 13:40:55 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int max_animals = 9;

	Animal **arr = new Animal*[max_animals];
	int i = 0;
	while (i < max_animals / 2)
	{
		std::cout <<BY<< "creating Dawg number " << i+1 <<RESET<< std::endl;
		arr[i] = new Dog();
		std::cout << std::endl;
		i++;
	}
	while (i < max_animals)
	{
		std::cout <<BP<< "creating Cat number " << i+1 <<RESET<< std::endl;
		arr[i] = new Cat();
		std::cout << std::endl;
		i++;
	}

	std::cout << "idea num 6 for cat is : " << arr[max_animals-2]->getBrain()->ideas[6] << std::endl;
	std::cout << "idea num 90 for Dawg is : " << arr[3]->getBrain()->ideas[90] << std::endl;

	for (int i = 0; i < max_animals; i++)
	{
		std::cout << "DELETING Dog number " << i+1 <<RESET<< std::endl;
		delete arr[i];
		std::cout << std::endl;
	}
	delete[] arr;
	return EXIT_SUCCESS;
}
