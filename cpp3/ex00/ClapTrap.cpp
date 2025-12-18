/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:17:42 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 12:07:06 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
	:_name("Default name"), _hit_point(10), _energy_point(10),
	_attack_damage(0) {	
	std::cout << "Clap Trap " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:_name(name), _hit_point(10), _energy_point(10), _attack_damage(0) {}

ClapTrap::ClapTrap(ClapTrap &other)
	:_name(other._name), _hit_point(other._hit_point),
	_energy_point(other._energy_point), _attack_damage(other._attack_damage) {
	std::cout << "Clap Trap " << _name << " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	if (this != &other)
	{
		this->_attack_damage = other._attack_damage;
		this->_name = other._name;
		this->_hit_point = other._hit_point;
		this->_energy_point = other._energy_point;
	}
	std::cout << "Clap Trap " << _name << " affected" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Clap Trap " << _name << " destructed" << std::endl;
}

void ClapTrap::attack(ClapTrap &other) {
	if (_energy_point > 0 && _hit_point > 0)
	{
		std::cout << "Clap Trap " << _name
			<< " attacks " << other._name
			<< ", causing " << _attack_damage
			<< " points of damages" << std::endl;
		other.takeDamage(_attack_damage);
		_energy_point -= 1;
	}
	else {
		std::cout << "Clap Trap " << _name
			<< " cannot attacks " << other._name << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hit_point -= amount;
	std::cout << "Clap Trap " << _name
		<< " lost " << amount
		<< " hit points " << _attack_damage << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_point > 0 && _hit_point > 0)
	{
		_hit_point += amount;
		_energy_point -= 1;
		std::cout << "Clap Trap " << _name
			<< " repair it self by " << amount
			<< " hit points" << std::endl;
	}
	else {
		std::cout << "Clap Trap " << _name
			<< " cannot repair it self by " << amount << std::endl;
	}
}
