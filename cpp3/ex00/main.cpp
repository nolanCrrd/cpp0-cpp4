/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:00:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 12:12:22 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

int main() {
	ClapTrap first("first");
	ClapTrap second("second");

	std::cout << std::endl << "==basics tests==" << std::endl;
	first.attack(second);
	second.beRepaired(1);

	std::cout << std::endl << "==make second lost all energy==" << std::endl;
	// Make second failed to make actions -> no more energy
	second.attack(first);
	second.attack(first);
	second.attack(first);
	second.attack(first);
	second.attack(first);
	second.attack(first);
	second.attack(first);
	second.attack(first);
	second.attack(first);

	std::cout << std::endl << "==second is no more able to make actions==" << std::endl;
	// failed
	second.attack(first);
	second.beRepaired(1);

	std::cout << std::endl << "==first stil able to make actions==" << std::endl;
	// First still can make actions
	first.attack(second);

	std::cout << std::endl << "==destruction==" << std::endl;

	return (0);
}
