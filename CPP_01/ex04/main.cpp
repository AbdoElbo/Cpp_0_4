/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekko <gekko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:44:27 by gekko             #+#    #+#             */
/*   Updated: 2026/04/26 21:40:47 by gekko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.hpp"

int main(int ac, char **av)
{
    std::string line;
    
    if (errorHandler(ac, av) == false)
        return EXIT_FAILURE;
    
    return EXIT_SUCCESS;
}