/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:14:21 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 13:37:21 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB()
	:_name("NoName"), _weapon(NULL) {}

HumanB::HumanB(std::string name)
	:_name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attack with their " << _weapon->getType() << "\n";
	else
		std::cout << _name << " attack with their " << "(no weapon)"<< "\n";
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
