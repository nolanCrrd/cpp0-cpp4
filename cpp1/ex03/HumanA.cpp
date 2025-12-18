/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:14:21 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 13:27:31 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon)
	:_name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << _name << " attack with their " << _weapon.getType() << "\n";
}
