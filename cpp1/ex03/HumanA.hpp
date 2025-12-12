/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:08:33 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 13:24:21 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class	HumanA {
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack();

	private:

	std::string	name;
	Weapon		&weapon;
};

#endif
