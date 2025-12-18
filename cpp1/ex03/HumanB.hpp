/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:08:33 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 13:37:15 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class	HumanB {
	public:

	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon &weapon);
	void	attack();

	private:

	std::string	_name;
	Weapon		*_weapon;
};

#endif
