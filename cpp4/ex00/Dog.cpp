/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:38:02 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:46:25 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

Dog::Dog() : Animal() {
	this->setType("Dog");
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(std::string type) : Animal() {
	this->setType(type);
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog &other) : Animal() {
	this->setType(other.getType());
	std::cout << "Dog created" << std::endl;
}

Dog &Dog::operator=(Dog &other) {
	if (this != &other)
		this->setType(other.getType());
	std::cout << "Dog created" << std::endl;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Wouuuuf" << std::endl;
}
