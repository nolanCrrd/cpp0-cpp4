/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:17:42 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 11:18:03 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cerrno>
#include <string>

ClapTrap::ClapTrap()
	:_name("Default name"), _hit_point(10), _energy_point(10), _attack_damage(10) {}

ClapTrap::ClapTrap(std::string name)
	:name(name) {
}
