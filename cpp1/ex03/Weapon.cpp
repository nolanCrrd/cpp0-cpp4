/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:06:37 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 13:27:49 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
	:type(){}

Weapon::Weapon(std::string type)
	:type(type){}

Weapon::~Weapon() {}

std::string	Weapon::getType() {
	return (type);
}

void	Weapon::setType(std::string new_type) {
	type = new_type;
}
