/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:27:46 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/01 15:35:09 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *tom = new Cat();
	Animal *spike = new Dog();
	// Animal *generic = new Animal();
	// The line above won't work (which is what the exercice is asking for)
	// we edited the class Animal so it won't be instantiated.

	std::cout << std::endl;
	std::cout << "idea of cat: " << tom->getBrain()->ideas[7] << std::endl;
	std::cout << "idea of dog: " << spike->getBrain()->ideas[55] << std::endl;
	std::cout << std::endl;

	delete tom;
	delete spike;
	return EXIT_SUCCESS;
}
