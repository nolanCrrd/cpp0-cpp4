/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:54:36 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/14 15:14:41 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

void	Harl::_debug() {
	std::cout << "[ DEBUG ]: Debug message\n";
}

void	Harl::_info() {
	std::cout << "[ INFO ]: Info message\n";
}
void	Harl::_warning() {
	std::cout << "[ WARNING ]: Warning message\n";
}

void	Harl::_error() {
	std::cout << "[ ERROR ]: Error message\n";
}

void	Harl::complain(std::string level) {
	int					i = 0;
	const std::string	strs[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void				(* const functions[4])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	while (i < 4 && strs[i] != level)
		i++;
	if (i == 4)
	{
		std::cout << "INVALID LEVEL !\n";
		return ;
	}
	functions[i]();
}
