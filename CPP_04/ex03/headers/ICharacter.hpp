/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:39:41 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/06/02 15:07:07 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Color.hpp"
#include "AMateria.hpp"

#define MAX_SLOTS 4

class ICharacter
{
	private:
		std::string name;
		std::string slots[MAX_SLOTS];
	public:
		ICharacter();
		ICharacter(const ICharacter& other);
		ICharacter& operator=(const ICharacter& other);
		virtual ~ICharacter();

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
