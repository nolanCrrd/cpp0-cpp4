/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:57:05 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/14 15:00:18 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main() {
	Harl	harl;

	std::cout << "\n====== Complain('DEBUG') ======\n";
	harl.complain("DEBUG");

	std::cout << "\n====== Complain('INFO') ======\n";
	harl.complain("INFO");

	std::cout << "\n====== Complain('WARNING') ======\n";
	harl.complain("WARNING");

	std::cout << "\n====== Complain('ERROR') ======\n";
	harl.complain("ERROR");

	std::cout << "\n====== Complain('INVALID') ======\n";
	harl.complain("INVALID");
}
