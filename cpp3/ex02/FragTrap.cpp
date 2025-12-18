/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:20:55 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 13:07:34 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

FragTrap::FragTrap() : ClapTrap() {
	_name = "Default FragClap";
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "Frag Trap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "Frag Trap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other) {
	std::cout << "Frag Trap " << _name << " copy created" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &other) {
	ClapTrap::operator=(other);
	std::cout << "Frag Trap " << _name << " assigned" << std::endl;;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Frag Trap destroyed" << std::endl;
}

void FragTrap::attack(ClapTrap &other) {
	if (_energy_point > 0 && _hit_point > 0)
	{
		std::cout << "Frag Trap " << _name
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

void FragTrap::highFivesGuys() {
	std::cout << "Frag Trap " << _name << " make an HighFive !" << std::endl;
}
