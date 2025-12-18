/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:00:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/18 13:05:22 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <ostream>

int main() {
	FragTrap first("first");
	FragTrap first_dup(first);
	
	std::cout << std::endl << "==first attaque sa copie==" << std::endl;
	first.attack(first_dup);

	std::cout << std::endl << "==destroying==" << std::endl;
	return (0);
}
