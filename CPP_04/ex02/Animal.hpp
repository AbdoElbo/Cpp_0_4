/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:12 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/01 17:10:05 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

#define NR "\033[0;31m" // normal red
#define NG "\033[0;32m" // normal green
#define NY "\033[0;33m" // normal yellow
#define NB "\033[0;34m" // normal blue
#define NP "\033[0;35m" // normal blue
#define BR "\033[1;31m" // bold red
#define BG "\033[1;32m" // bold green
#define BY "\033[1;33m" // bold yellow
#define BB "\033[1;34m" // bold blue
#define BP "\033[1;35m" // bold blue
#define GW "\033[0;39m" // gray/white
#define RESET "\033[0m" // RESET DUH

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() = 0;
		virtual Brain* getBrain() const;
};
