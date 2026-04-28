/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:47:51 by gekko             #+#    #+#             */
/*   Updated: 2026/04/28 18:43:58 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>

bool		initWithCheck(int ac, char **av, std::string &line);
std::string	replace(std::string s1, std::string s2, std::string &line);
std::string	getFileName(std::string str);
