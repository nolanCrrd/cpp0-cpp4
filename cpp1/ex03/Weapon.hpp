/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:03:33 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 13:12:00 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon {
	public:

	Weapon();
	Weapon(std::string	type);
	~Weapon();

	std::string	getType();
	void		setType(std::string new_type);

	private:
		std::string	_type;
};

#endif
