/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:34:42 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 17:03:00 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
	
	std::string _name;

	public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(ClapTrap &other);
	DiamondTrap &operator=(ClapTrap &other);
	void attack(const std::string &target);
	void whoAmI();

};

#endif
