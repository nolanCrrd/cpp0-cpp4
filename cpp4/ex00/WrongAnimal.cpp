/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:34:15 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:48:34 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
	:_type("") {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	:_type(type) {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
	:_type(other._type) {
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other) {
	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal created" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::setType(std::string type) {
	_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "*** Alien noise ***" << std::endl;
}
