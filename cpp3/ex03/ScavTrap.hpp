/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:19:37 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 13:05:06 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {
	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &other);
	ScavTrap &operator=(ScavTrap &other);
	~ScavTrap();

	void guardGate();
	void attack(const std::string &target);
};

#endif
