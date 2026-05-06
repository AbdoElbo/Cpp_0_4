/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:39:17 by aelbouaz          #+#    #+#             */
/*   Updated: 2026/05/05 15:07:36 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string sentence = "HI THIS IS BRAIN";
	void *stringPTR = &sentence;
	std::string &stringREF = sentence;

	// std::cout << "\nMemory addresses:" << std::endl;
	std::cout << "String:    " << &sentence << std::endl;
	std::cout << "Pointer:   " << &stringPTR << std::endl;
	std::cout << "Reference: " << &stringREF << std::endl;

	// std::cout << "\nValues:" << std::endl;
	std::cout << "String:    " << sentence << std::endl;
	std::cout << "Pointer:   " << stringPTR << std::endl;
	std::cout << "Reference: " << stringREF << std::endl;

	return (EXIT_SUCCESS);
}
