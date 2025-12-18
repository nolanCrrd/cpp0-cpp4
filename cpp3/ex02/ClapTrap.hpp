/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:05:37 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 12:23:03 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
class ClapTrap {
	protected:

	std::string _name;
	int _hit_point;
	int _energy_point;
	unsigned int _attack_damage;

	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &other);
	ClapTrap &operator=(ClapTrap &other);
	~ClapTrap();

	void attack(ClapTrap &other);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
