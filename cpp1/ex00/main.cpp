/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:38:18 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 11:50:46 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*allocated1;
	Zombie	*allocated2;

	randomChump("Random chump 1");
	randomChump("Random chump 2");
	allocated1 = newZombie("Allocated 1");
	allocated1->announce();
	allocated2 = newZombie("Allocated 2");
	allocated2->announce();
	delete allocated1;
	delete allocated2;
}
