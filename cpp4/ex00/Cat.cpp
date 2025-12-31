/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:38:02 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:45:24 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal() {
	this->setType("Cat");
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(std::string type) : Animal() {
	this->setType(type);
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat &other) : Animal() {
	this->setType(other.getType());
	std::cout << "Cat created" << std::endl;
}

Cat &Cat::operator=(Cat &other) {
	if (this != &other)
		this->setType(other.getType());
	std::cout << "Cat created" << std::endl;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miaouuu" << std::endl;
}
