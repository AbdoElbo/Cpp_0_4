/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:27:46 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 17:04:08 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* spike = new Dog();
	const Animal* tom = new Cat();

	std::cout <<NP<< "This animal is a " << meta->getType() <<RESET<< std::endl;
	std::cout <<NP<< "This animal is a " << tom->getType() <<RESET<< std::endl;
	std::cout <<NP<< "This animal is a " << spike->getType() <<RESET<< std::endl;

	std::cout <<std::endl;
	meta->makeSound();
	tom->makeSound();
	spike->makeSound();
	std::cout <<std::endl;

	delete meta;
	delete tom;
	delete spike;

	const WrongAnimal* tom_wrong = new WrongCat();

	std::cout <<NP<< "This thing is :" << tom_wrong->getType() <<RESET<< std::endl;
	tom_wrong->makeSound();
	delete tom_wrong;

	return EXIT_SUCCESS;
}
