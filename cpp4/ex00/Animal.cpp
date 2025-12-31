/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:34:15 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:48:34 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal()
	:_type("") {
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type)
	:_type(type) {
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal &other)
	:_type(other._type) {
	std::cout << "Animal created" << std::endl;
}

Animal &Animal::operator=(Animal &other) {
	if (this != &other)
		_type = other._type;
	std::cout << "Animal created" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::setType(std::string type) {
	_type = type;
}

void Animal::makeSound() const {
	std::cout << "*** Alien noise ***" << std::endl;
}
