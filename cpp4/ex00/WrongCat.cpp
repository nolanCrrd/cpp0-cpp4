/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:38:02 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:45:24 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat() : WrongAnimal() {
	this->setType("WrongCat");
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal() {
	this->setType(type);
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat &other) : WrongAnimal() {
	this->setType(other.getType());
	std::cout << "WrongCat created" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &other) {
	if (this != &other)
		this->setType(other.getType());
	std::cout << "WrongCat created" << std::endl;
	return (*this);
}
