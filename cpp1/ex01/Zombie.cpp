/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:28:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 12:23:32 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

void	Zombie::announce(void) {
	std::cout << _name + " : " + "BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string newName) {
	_name = newName;
}

Zombie::Zombie(std::string name)
	:_name(name){}

Zombie::Zombie()
	:_name(){}

Zombie::~Zombie() {
	std::cout << _name + " : destroyed\n";
}
