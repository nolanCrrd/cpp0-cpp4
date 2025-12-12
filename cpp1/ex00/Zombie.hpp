/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:25:59 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 11:41:02 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie {
	public:

	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);

	private:

	std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
