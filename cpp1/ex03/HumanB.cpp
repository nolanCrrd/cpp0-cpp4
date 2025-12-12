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
	:name("NoName"), weapon(NULL) {}

HumanB::HumanB(std::string name)
	:name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attack with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attack with their " << "(no weapon)"<< "\n";
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}
