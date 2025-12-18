/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:20:55 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 13:05:02 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap() {
	_name = "Default ScavTrap";
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "Scav Trap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "Scav Trap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other) {
	std::cout << "Scav Trap " << _name << " copy created" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other) {
	ClapTrap::operator=(other);
	std::cout << "Scav Trap " << _name << " assigned" << std::endl;;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav Trap destroyed" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "Scav Trap " << _name
	<< " entered in guard mode" << std::endl;
}

void ScavTrap::attack(ClapTrap &other) {
	if (_energy_point > 0 && _hit_point > 0)
	{
		std::cout << "Scav Trap " << _name
			<< " attacks " << " another"
			<< ", causing " << _attack_damage
			<< " points of damages" << std::endl;
		other.takeDamage(_attack_damage);
		_energy_point -= 1;
	}
	else {
		std::cout << "Clap Trap " << _name
			<< " cannot attacks " << " a clap trap" << std::endl;
	}
}
