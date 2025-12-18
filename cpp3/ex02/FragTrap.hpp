/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:19:37 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 13:06:42 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &other);
	FragTrap &operator=(FragTrap &other);
	~FragTrap();

	void highFivesGuys();
	void attack(ClapTrap &other);
};

#endif
