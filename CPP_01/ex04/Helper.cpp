/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekko <gekko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:49:32 by gekko             #+#    #+#             */
/*   Updated: 2026/04/26 21:22:42 by gekko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.hpp"

bool errorHandler(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Invalid Number of Arguments." << std::endl;
        return false;
    }
    std::ifstream fd(av[1]);
    if (!fd)
    {
        std::cerr << "File doesn't exist." << std::endl;
        return false;
    }
    return true;
}