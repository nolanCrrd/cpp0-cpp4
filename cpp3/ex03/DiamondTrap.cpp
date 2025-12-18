/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:46:45 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 17:02:59 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap() : ClapTrap() {}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name.append("_clap_name")) {
	_name = name;
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(ClapTrap &other)
	: ClapTrap(other) {}

DiamondTrap &DiamondTrap::operator=(ClapTrap &other) {
	ClapTrap::operator=(other);
	return (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ClapTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "Diamond Trap having hand" << std::endl;
}
