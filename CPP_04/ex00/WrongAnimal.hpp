/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:58:54 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/22 13:13:31 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

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

class WrongAnimal
{
	private:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		virtual ~WrongAnimal();
		std::string getType() const;
		virtual void makeSound() const;
};
