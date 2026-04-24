/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:16:40 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/04/24 10:17:38 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void		announce();
		std::string	getName();
		void		setName(std::string newName);
	};

Zombie* zombieHorde(int N, std::string name);
