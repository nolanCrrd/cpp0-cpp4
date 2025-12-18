/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:00:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 17:00:37 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <ostream>

int main() {
	DiamondTrap first("first");
	DiamondTrap first_dup(first);
	
	std::cout << std::endl << "==first attaque sa copie==" << std::endl;
	first.attack("first copy");
	first_dup.takeDamage(first.getAttackDamage());

	std::cout << std::endl << "==destroying==" << std::endl;
	return (0);
}
