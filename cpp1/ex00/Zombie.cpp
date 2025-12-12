/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:28:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 12:23:40 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

void	Zombie::announce(void)
{
	std::cout << name + " : " + "BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
	:name(name){}

Zombie::Zombie()
	:name(){}

Zombie::~Zombie()
{
	std::cout << name + " : destroyed\n";
}
