/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:00:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 13:05:22 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <ostream>

int main() {
	ScavTrap first("first");
	ScavTrap first_dup(first);
	FragTrap second("second");
	FragTrap second_dup(second);
	
	std::cout << std::endl << "==first attaque sa copie==" << std::endl;
	first.attack("first copy");
	first_dup.takeDamage(first.getAttackDamage());

	std::cout << std::endl << "==second attaque sa copie==" << std::endl;
	second.attack("second copy");
	second_dup.takeDamage(second_dup.getAttackDamage());

	std::cout << std::endl << "==second attaque first==" << std::endl;
	second.attack("first");
	first.takeDamage(first.getAttackDamage());

	std::cout << std::endl << "==destroying==" << std::endl;
	return (0);
}
